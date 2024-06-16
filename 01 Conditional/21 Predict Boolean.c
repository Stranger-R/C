#include <stdio.h>
void main()
{
    int x = 3,y,z;
    y = x = 10;
    z = x<10;
    
    printf("\nx = %d\n y = %d\n z = %d",x,y,z);
}