#include <stdio.h>
void main()
{
int a;

 printf ("Enter Number : ");
 scanf ("%d",&a);

 
  if (a>99  &&  a<1000)
  {
     printf(" This Is Three Digit Number %d",a);
  }
  else 
  {
     printf(" This Is Not Three Digit Number %d",a);
  }
}