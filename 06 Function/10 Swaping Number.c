#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number A : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter Number B : ");
    scanf("%d",&b);
    
    printf("\nBefore Swaping Value A : %d\nBefore Swaping Value B :%d\n",a,b);
    
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf ("\nAfter Swaping Value A : %d\nAfter Swaping Value B :%d",a,b);
    
    return 0;
}