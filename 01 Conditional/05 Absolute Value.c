#include <stdio.h>
void main()
{
int a;

 printf ("Enter A Years : ");
 scanf ("%d",&a);
  
  if (a<0)
  {
      a = a * (-1);
  }
     printf("This Is Absolute Value : %d",a);

}