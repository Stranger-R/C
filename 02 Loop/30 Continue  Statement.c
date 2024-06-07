#include <stdio.h>
void main()
{
    int age;
    for(int i=1;i<=10;i++)
    {
        printf("Enter Your Age : ");
        scanf("%d",&age);
      
      if(age>10)
      {
          continue;
      }
      
        printf("We Have Not Come Accross Any Continue Statements");
    }
}