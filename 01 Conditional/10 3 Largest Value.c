#include <stdio.h>
void main()
{
int a;

 printf ("Enter Number : ");
 scanf ("%d",&a);

int b;

 printf ("Enter Number : ");
 scanf ("%d",&b);

int c;

 printf ("Enter Number : ");
 scanf ("%d",&c);
    
    if (a>b && a>c)
    {
         printf ("%d Is largest Value",a);
    }

    if (b>a && b>c)
    {
        printf ("%d Is largest Value",b);
    }
   
    if (c>b && c>a)
    {
        printf ("%d Is largest Value",c);
    }

}