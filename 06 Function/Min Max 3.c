#include <stdio.h>
void MinMax(int x, int y, int z)
{
  if(x>y && x>z)
  {
    printf("Maximum Value Is : %d",x);
  }
  else if (y>z && y>x)
  {
    printf("Maximum Value Is : %d",y);
  }
  else
  {
    printf("Maximum Value Is : %d",z);
  }
}

int main()
{
  int a,b,c;
  printf("Enter Value : ");
  scanf("%d",&a);

  printf("Enter Value : ");
  scanf("%d",&b);

  printf("Enter Value : ");
  scanf("%d",&c);

  MinMax(a,b,c);
  
  return 0;
}