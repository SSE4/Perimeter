/* Boost interval/detail/msvc_rounding_control.hpp file
 *
 * Copyright Maarten Keijzer 2000
 * Copyright Herv� Br�nnimann, Guillaume Melquiond, Sylvain Pion 2002
 * Permission to use, copy, modify, sell, and distribute this software
 * is hereby granted without fee provided that the above copyright notice
 * appears in all copies and that both that copyright notice and this
 * permission notice appear in supporting documentation,
 *
 * None of the above authors nor Polytechnic University make any
 * representation about the suitability of this software for any
 * purpose. It is provided "as is" without express or implied warranty.
 *
 * $Id: msvc_rounding_control.hpp,v 1.3 2003/06/01 07:41:00 gmelquio Exp $
 */

#ifndef BOOST_NUMERIC_INTERVAL_DETAIL_MSVC_ROUNDING_CONTROL_HPP
#define BOOST_NUMERIC_INTERVAL_DETAIL_MSVC_ROUNDING_CONTROL_HPP

#ifndef _MSC_VER
#  error This header is only intended for MSVC, but might work for Borland as well
#endif

#include <float.h>      // MSVC rounding control

namespace boost {
namespace numeric {
namespace interval_lib {
namespace detail {

extern "C" { double rint(double); }

struct x86_rounding
{
  static unsigned int hard2msvc(unsigned short m) {
    unsigned int n = 0;
    if (m & 0x01) n |= _EM_INVALID;
    if (m & 0x02) n |= _EM_DENORMAL;
    if (m & 0x04) n |= _EM_ZERODIVIDE;
    if (m & 0x08) n |= _EM_OVERFLOW;
    if (m & 0x10) n |= _EM_UNDERFLOW;
    if (m & 0x20) n |= _EM_INEXACT;
    switch (m & 0x300) {
    case 0x000: n |= _PC_24; break;
    case 0x200: n |= _PC_53; break;
    case 0x300: n |= _PC_64; break;
    }
    switch (m & 0xC00) {
    case 0x000: n |= _RC_NEAR; break;
    case 0x400: n |= _RC_DOWN; break;
    case 0x800: n |= _RC_UP;   break;
    case 0xC00: n |= _RC_CHOP; break;
    }
    if (m & 0x1000) n |= _IC_AFFINE; // only useful on 287
    return n;
  }

  static unsigned short msvc2hard(unsigned int n) {
    unsigned short m = 0;
    if (n & _EM_INVALID)    m |= 0x01;
    if (n & _EM_DENORMAL)   m |= 0x02;
    if (n & _EM_ZERODIVIDE) m |= 0x04;
    if (n & _EM_OVERFLOW)   m |= 0x08;
    if (n & _EM_UNDERFLOW)  m |= 0x10;
    if (n & _EM_INEXACT)    m |= 0x20;
    switch (n & _MCW_RC) {
    case _RC_NEAR: m |= 0x000; break;
    case _RC_DOWN: m |= 0x400; break;
    case _RC_UP:   m |= 0x800; break;
    case _RC_CHOP: m |= 0xC00; break;
    }
    switch (n & _MCW_PC) {
    case _PC_24: m |= 0x000; break;
    case _PC_53: m |= 0x200; break;
    case _PC_64: m |= 0x300; break;
    }
    if ((n & _MCW_IC) == _IC_AFFINE) m |= 0x1000;
    return m;
  }

  typedef unsigned short rounding_mode;
  static void get_rounding_mode(rounding_mode& mode)
  { mode = msvc2hard(_control87(0, 0)); }
  static void set_rounding_mode(const rounding_mode mode)
  { _control87(hard2msvc(mode), _MCW_EM | _MCW_RC | _MCW_PC | _MCW_IC); }
  static double to_int(const double& x) { return rint(x); }
};

} // namespace detail
} // namespace interval_lib
} // namespace numeric
} // namespace boost

#endif /* BOOST_NUMERIC_INTERVAL_DETAIL_MSVC_ROUNDING_CONTROL_HPP */
