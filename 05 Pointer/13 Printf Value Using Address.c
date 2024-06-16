#include <stdio.h>
int main() 
{
    int a = 5;
    int* r = &a;
    printf("\n%d",a);
    printf("\n%p",&a);
    printf("\n%p",r);
    printf("\n%d",*r);
    return 0;
}