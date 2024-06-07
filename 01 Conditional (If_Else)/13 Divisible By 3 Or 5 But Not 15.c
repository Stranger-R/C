#include <stdio.h>
void main ()
{
    int a;
    
    printf("Enter Number : ");
    scanf("%d",&a);
            
        if((a%5==0 || a%3==0) && a%15!=0)
        {
            printf ("The Number Is Divisible By 3 Or 5 But Not 15 ");
        }
        else
        {
            printf ("The Number Is Divisible By 3 Or 5 But 15 ");
        }
}