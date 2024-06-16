#include <stdio.h>
int sum (int a, int b)
{
    return a+b;
}

int main() 
{
    int x,y;
    printf("enter Value X : ");
    scanf("%d",&x);
    
    printf("enter Value Y : ");
    scanf("%d",&y);
    
    int S = sum(x,y);
    printf("X Value Is %d And Y Value Is  %d Sum = %d",x,y,S);
    return 0;
}