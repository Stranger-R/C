#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
  
    
    float a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%.1f3\t",a);
        a = a/2;
    }
}