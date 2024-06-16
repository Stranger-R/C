#include <stdio.h>
void main()
{
   int num ;
   int sum = 0;
    printf("Enter The Last Natural Number You Want The Sum Of : ");
    scanf("%d",&num);
 
   for(int i=2;i<=num;i+=2)
   {
       sum +=i;
   }
    printf("Sum Of First %d Natural Numbers Is %d\n",num,sum);
   }
