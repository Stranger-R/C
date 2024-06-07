#include <stdio.h>
int Sum(int r, int j)
{
  return r+j;
}
int Multi(int i, int t)
{
  return i*t;
}
int MinMax(int x, int y)
{
  if(x>y)
  {
    printf("\n\nMaximum Value Is : %d",x);

  }
  else
  {
      printf("\n\nMaximum Value Is : %d",y);
  }
}

int main()
{
  int a,b;
  printf("Enter Value : ");
  scanf("%d",&a);

  printf("Enter Value : ");
  scanf("%d",&b);

  MinMax(a,b); 

  
  int S = Sum(a,b);
  printf("\nThe Value Is Sum : %d",S);

  int M = Multi(a,b);
  printf("\nThe Value Is Multi : %d",M);
  
  return 0;
}