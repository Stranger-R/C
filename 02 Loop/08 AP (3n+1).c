#include <stdio.h>
void main()
{
int n;

    printf("Enter A Number : ");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3)
    {
        printf("%d\t",i);
    }
}