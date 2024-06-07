#include <stdio.h>

int swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("\n\nnAfter Swap Value Is A = %d And B = %d",x,y);
    
}
int main() 
{
    int a,b;
    printf("Enter Value A : ");
    scanf("%d",&a);
    printf("Enter Value B : ");
    scanf("%d",&b);
    
    printf("\nnBefore Swap Value Is A = %d And B = %d",a,b);
    
    swap(a,b);
    

    return 0;
}