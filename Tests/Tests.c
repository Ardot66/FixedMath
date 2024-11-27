#include <stdio.h>
#include "FixedMath.h"
#include "TestingUtilities.h"

int main(int argCount, char **argValues)
{
    Fixed fixed = FIXED(100, 156);
    
    TEST(FixedHigh(fixed), ==, 100, llu)
    TEST(FixedLow(fixed), ==, 156, llu)

    TestsEnd();
}