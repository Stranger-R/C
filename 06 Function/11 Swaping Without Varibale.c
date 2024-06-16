#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Number : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter B Number : ");
    scanf("%d",&b);
    
    printf("\nBefore Swaping Number Value Is A : %d\n",a);
    printf("Before Swaping Number Value Is B : %d\n",b);
 
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nAfter Swaping Number Value Is A : %d\n",a);
    printf("After Swaping Number Value Is B : %d\n",b);
    
    return 0;
}