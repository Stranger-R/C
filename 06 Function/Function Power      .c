#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter Number A : ");
    scanf("%d",&a);

    int b;
    printf("Enter Number B : ");
    scanf("%d",&b);
    
    float Power = pow(a,b);
    printf("The %d And Power %d Is : %.2f",a,b,Power);
    return 0;
    
}