#include <stdio.h>
void main ()
{
    int a;
    
    printf("Enter Number A : ");
    scanf("%d",&a);

    int b;
    printf("Enter Number B : ");
    scanf("%d",&b);

    int c;
    printf("Enter Number C : ");
    scanf("%d",&c);

        if(a>b)
        {
            if(a>c)
            
                printf("A Is Largest");
            
            else
            
                printf("C Is Largest");
             
        }
        else
        {
            if(b>c)
            printf("B Is Largest");
            
            else
            printf("C Is Largest");

        }
        
        
}