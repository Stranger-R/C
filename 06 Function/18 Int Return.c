#include <stdio.h>
int Oprt(int r, int j)
{
  int sum,multi;

  sum = r+j;
  multi = r*j;

      printf("\n\nThe Value Is Sum : %d",sum);

      printf("\nThe Value Is Multi : %d",multi);

}
int MinMax(int x, int y)
{
  if(x>y)
  {
    return x;
  }
  else
  {
    return y ;
  }
}

int main()
{
  int a,b;
  printf("Enter Value : ");
  scanf("%d",&a);

  printf("Enter Value : ");
  scanf("%d",&b);

  int A = MinMax(a,b);
  printf("\n\nMaximum Value Is : %d",A);
 

  Oprt(a,b);
  
  return 0;
}