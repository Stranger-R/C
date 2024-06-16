#include <stdio.h>
void main()
{
int n;

    printf("Enter A Number : ");
    scanf("%d",&n);

int a=4;
    for(int i=4;i<=n;i++)
    {
     printf("%d\t",a);
     a = a + 3;
    }
}