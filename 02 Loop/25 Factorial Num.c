#include <stdio.h>
void main()
{
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    
    // 5! = 1x2x3x4x5
    int product=1;
    for(int i=1;i<=num;i++)
    {
        product = product*i;
    }
    printf("The Factorial Is : %d",product);
}