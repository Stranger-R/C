#include <stdio.h>
void main()
{              
   int a;
   printf("Enter Number A : ");
   scanf("%d",&a);
   
   int b;
   printf("Enter Number B : ");
   scanf("%d",&b);
   
   int power=1;
   
   for(int i=1;i<=b;i++)
   {
       power = power*a;
   }
   printf("%d Raised To The Power %d Is : %d",a,b,power);
}