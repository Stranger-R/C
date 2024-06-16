#include <stdio.h>
#include<math.h>

int main() 
{
    int a;
    printf("Enter Base : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter Power : ");
    scanf("%d",&b);
    
    double p = pow(a,b);
    printf("%d Raised To The Power %d Is : %if",a,b,p);
    
    // float root = sqrt(a);
    // printf("The Root Is %f ",root);
    
    // float cube = cbrt(a);
    // printf("\nThe Root Is %f ",cube);

    return 0;
}