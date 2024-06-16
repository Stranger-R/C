#include <stdio.h>
void main ()
{
    int a;
    
            printf("Enter Number : ");
            scanf("%d",&a);
            
        if(a%5==0)
        {
            if(a%3==0)
            {
                printf(" The Number Is Divisible By 3 And 5");
            }
            else
            {
                 printf(" The Number Is Not Divisible By 3 And 5");
            }
        }
        else
        {
                 printf(" The Number Is Not Divisible By 3 And 5");
        }
}