
//  (C) Copyright John Maddock 2000. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include "test.hpp"
#include "check_integral_constant.hpp"
#ifdef TEST_STD
#  include <type_traits>
#else
#  include <boost/type_traits/has_nothrow_copy.hpp>
#endif

TT_TEST_BEGIN(has_nothrow_copy)

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<bool>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<bool const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<bool volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<bool const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<signed char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<signed char const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<signed char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<signed char const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<char>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned char const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<char const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<char volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned char const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<char const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned short>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<short>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned short const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<short const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned short volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<short volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned short const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<short const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned int const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned int volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned int const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long const volatile>::value, false);

#ifdef BOOST_HAS_LONG_LONG

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long long>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long long const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long long const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long long volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned long long const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long long const volatile>::value, false);

#endif

#ifdef BOOST_HAS_MS_INT64

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int8>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int8>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int8 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int8 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int8 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int8 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int8 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int8 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int16>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int16>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int16 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int16 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int16 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int16 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int16 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int16 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int32>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int32>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int32 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int32 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int32 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int32 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int32 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int32 const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int64>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int64>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int64 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int64 const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int64 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int64 volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<unsigned __int64 const volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<__int64 const volatile>::value, false);

#endif

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<float>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<float const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<float volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<float const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<double>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<double const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<double volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<double const volatile>::value, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long double>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long double const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long double volatile>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<long double const volatile>::value, false);


BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<void*>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int*const>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<f1>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<f2>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<f3>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<mf1>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<mf2>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<mf3>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<mp>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<cmf>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<enum_UDT>::value, true);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int&>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<const int&>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int[2]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int[3][2]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<int[2][4][5][6][3]>::value, true);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<UDT>::value, false);
BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<void>::value, true);
// cases we would like to succeed but can't implement in the language:
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<empty_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<empty_POD_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<POD_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<POD_union_UDT>::value, true, false);
BOOST_CHECK_SOFT_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<empty_POD_union_UDT>::value, true, false);

BOOST_CHECK_INTEGRAL_CONSTANT(::tt::has_nothrow_copy<test_abc1>::value, false);

TT_TEST_END



