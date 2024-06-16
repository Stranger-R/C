#include <stdio.h>
void main()
{
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    
    a%2==0 ? printf("Even Number") : printf("Odd Number");
}