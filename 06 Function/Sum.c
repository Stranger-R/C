#include <stdio.h>
void plus(int x, int y)
{
  int sum;
  sum = x+y;

  printf("The Sum Is : %d ",sum);
}
int main()
{
  int a,b;
  printf("Enter Value : ");
  scanf("%d",&a);

  printf("Enter Value : ");
  scanf("%d",&b);

    plus(a,b);
  
  return 0;
}