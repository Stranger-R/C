#include <stdio.h>
void main()
{
   int x,y;
   printf("Enter The Coordinates : ");
   scanf("%d%d",&x,&y);
   
   if (x==0 && y==0)
   {
       printf("The point Is Origin");
   }
   else if(x==0)
   {
       printf("Lies On Y-Axis");
   }
   else if(y==0)
   {
       printf("Lies On X-Axis");
   }
   else
   {
       printf("The Point Does Not Lie On X Or Y Axis");
   }
} 