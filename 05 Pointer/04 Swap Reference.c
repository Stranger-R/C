#include <stdio.h>
int swap(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() 
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    
    printf("Before Swaping Value Is %d And %d",a,b);
    
    swap(&a,&b);
    
     printf("\nAfter Swaping Value Is %d And %d",a,b);
    return 0;
}