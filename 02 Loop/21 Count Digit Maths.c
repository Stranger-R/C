#include <stdio.h>
void main()
{
   int num;
   int sum = 0;
   printf("Enter The Last Natural Number You Want The Sum Of : ");
   scanf("%d",&num);
   
    sum = (num*num + num)/2;
   printf("Sum Of First %d Natural Numbers Is %d\n",num,sum);
}