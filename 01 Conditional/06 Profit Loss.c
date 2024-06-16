#include <stdio.h>
void main()
{
int b,s;

 printf ("Enter Buy Value : ");
 scanf ("%d",&b);
 
 printf ("Enter Sell Value : ");
 scanf ("%d",&s);
  
  if (b<s)
  {
     printf("The Product Is Profitable");
  }
  
  if (b>s)
  {
     printf("The Product Is Loss");
  }
  
  if (b==s)
  {
     printf("The Product Is Equal");
  }
  
}