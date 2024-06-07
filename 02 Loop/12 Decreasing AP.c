#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    
    int a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",a);
        a = a-3;
    }
}