#include <stdio.h>
void main()
{
int a;

 printf ("Enter Number : ");
 scanf ("%d",&a);

 
  if (a%3==0  &&  a%5==0)
  {
     printf("This Is Divisible By 3 And 5");
  }
  else 
  {
    printf("This Is Not Divisible By 3 And 5"); 
  }
  
}