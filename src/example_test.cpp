//
// Created by Michael Long on 10/9/23.
//

#include <example_test.h>

int foo()
{
	return 0;
}


TEST_CASE( "Example test", "[foo]" ) {
REQUIRE( foo() == 0 );
}
