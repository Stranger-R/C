#include <stdio.h>
void main()
{
int n;

    printf("Enter A Number : ");
    scanf("%d",&n);
int a =1;
    for(int i=1;i<=n;i++)
    {
     printf("%d\t",a);
        a= a*2;
    }
}