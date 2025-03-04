//-----------------------------------------------------------------------------
// boost mpl/test/insert_range.cpp source file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2001-02
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#include "boost/mpl/insert_range.hpp"
#include "boost/mpl/find.hpp"
#include "boost/mpl/list_c.hpp"
#include "boost/mpl/list.hpp"
#include "boost/mpl/size.hpp"
#include "boost/mpl/range_c.hpp"
#include "boost/mpl/equal.hpp"
#include "boost/static_assert.hpp"

namespace mpl = boost::mpl;

int main()
{
    typedef mpl::list_c<int,0,1,7,8,9> numbers;
    typedef mpl::find< numbers,mpl::integral_c<int,7> >::type pos;
    typedef mpl::insert_range< numbers,pos,mpl::range_c<int,2,7> >::type range;

    BOOST_STATIC_ASSERT(mpl::size<range>::type::value == 10);
    BOOST_STATIC_ASSERT((mpl::equal< range,mpl::range_c<int,0,10> >::type::value));

    typedef mpl::insert_range<
                mpl::list0<>,
                mpl::end< mpl::list0<> >::type,
                mpl::list<int>
            >::type result2;
    
    BOOST_STATIC_ASSERT((mpl::size<result2>::type::value == 1));

    return 0;
}
