#include <ctest.h>
#include <../src/function.h>

CTEST(Test_1_Check, input_1)
{
    int result = Check(1);
	
    int expected = 2;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2_Check, input_m_1)
{
    int result = Check(-1);
	
    int expected = 1;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_3_Check, input_0)
{
    int result = Check(0);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_1_discriment, input_3_2_1)
{
    int result = Disc(3,2,1);
	
    int expected = -8;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2_discriment, input_1_3_2)
{
    int result = Disc(1,3,2);
	
    int expected = 1;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_3_discriment, input_4_4_1)
{
    int result = Disc(4,4,1);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}
