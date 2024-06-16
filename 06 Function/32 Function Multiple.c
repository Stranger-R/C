#include <stdio.h>
int mul(int a,int b)
{
    return a*b;
}

int main()
{
    int a;
    printf("Enter Number A : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter Number B : ");
    scanf("%d",&b);
    
    int n = mul(a,b);
    
    printf("\n The Multiple Number :  %d",n);
    
   

    return 0;
}