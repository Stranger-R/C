#include <stdio.h>
#include <math.h>

int main()
{
    // Size Of Integer Approx 10 Digit 
    // USe For Math.h Libaray (Pre Processor)
    
    int x = __INT_MAX__;    // (4 Byte = 32 Bits  , 1 Byte = 8 Bits)
    long y = __LONG_MAX__;
    double z =__SIZEOF_DOUBLE__;
    char c = __SCHAR_MAX__;

    printf("\n%d",x);
    printf("\n%ld",y);
    printf("\n%lf",z);
    printf("\n%c",c);
}