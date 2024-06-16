#include <stdio.h>
int sum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a;
    printf("Enter Number A : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter Number B : ");
    scanf("%d",&b);
    
    int c;
    printf("Enter Number C : ");
    scanf("%d",&c);
    
    int n = sum(a,b,c);
    
    printf("\n The Maximum Number :  %d",n);

    return 0;
}