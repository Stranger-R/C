#include <stdio.h>
void main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    int count=0;
    while(n!=0)
    {
        n =n/10;
        count++;
    }
    printf("The Number Is %d",count);
}