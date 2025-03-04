/*=============================================================================
    Copyright (c) 2003 Jonathan de Halleux (dehalleux@pelikhan.com)
    http://spirit.sourceforge.net/

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

///////////////////////////////////////////////////////////////////////////////
// Test suite for push_front_actor, pop_front_actor
///////////////////////////////////////////////////////////////////////////////

#include <boost/spirit.hpp>
#include <boost/test/unit_test.hpp>

#include <boost/spirit/actor/erase_actor.hpp>
#include <map>

void erase_test()
{
    using namespace boost::unit_test_framework;
    using namespace boost::spirit;

    const char* cp = "one,two,three";
    const char* cp_first = cp;
    const char* cp_last = cp + strlen(cp);
    const char* cp_i[] = {"one","two","three"};
    size_t i;
    typedef std::map<std::string, int> map_string_type;
    map_string_type c;
    map_string_type::const_iterator it_find;

    scanner<char const*> scan(cp_first, cp_last);
    match<> hit;

    c["one"]=1;
    c["two"]=2;
    c["three"]=3;
    c["four"]=4;

    hit = (*((+alpha_p)[ erase_a(c) ] >> !ch_p(','))).parse(scan);

    BOOST_CHECK(hit);
    BOOST_CHECK_EQUAL(scan.first, scan.last);
    BOOST_CHECK_EQUAL( c.size(), static_cast<map_string_type::size_type>(1));
    for (i=0;i<3;++i)
    {
        it_find = c.find(cp_i[i]);
        BOOST_CHECK( it_find == c.end() );
    }
    scan.first = cp;

}

void erase_action_test(boost::unit_test_framework::test_suite* test)
{
    test->add( BOOST_TEST_CASE(&erase_test));
}


