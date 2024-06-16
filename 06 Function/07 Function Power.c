#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter A Number : ");
    scanf("%d",&a);
    
    //  int a = pow (value)
    int root = pow(a,5);
    printf("The Squre Root Is : %d",root);
    return 0;
    
}