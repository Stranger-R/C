#include <stdio.h>

int plus(int x,int y)
{
    return x+y;
}

int main()
{
        int a;
        printf("Enter 1st Number : ");
        scanf("%d",&a);
        
        int b;
        printf("Enter 2st Number : ");
        scanf("%d",&b);
        
        int sum = plus(a,b);
        printf("%d",sum);
        return 0;
}       