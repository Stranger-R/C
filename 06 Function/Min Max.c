#include <stdio.h>
void MinMax(int x, int y)
{
  if(x>y)
  {
    printf("Maximum Value Is : %d",x);
  }
  else
  {
    printf("Maximum Value Is : %d",y);
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
  
  return 0;
}