#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
 
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("The Number Is Composite");
          break;
        }
        else
        {
              printf("The Number Is Prime");
                break;
        }
    }
}