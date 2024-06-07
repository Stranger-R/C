#include <stdio.h>

int main() 
{
    int x,y;
    float a,b,c,d;
    printf("Enter Current Value : ");
    scanf("%d",&x);
    
    printf("Enter Target Value : ");
    scanf("%d",&y);
    
     // Process
    
    a = y-x;
    
    b = x/100;
    
    c = a/b;
    
    printf("%f",c);
    
    return 0;
}