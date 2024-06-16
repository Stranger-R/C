#include <stdio.h>
void main()
{
    int a;
    printf("Enter Percentage : ");
    scanf("%d",&a);
    
    if(a>80)
    {
        printf("A Grade");
    }
    else if(a>70)
    {
        printf("B Grade");
    }
    else if(a>40)
    {
        printf("C Grade");
    }
    else
    {
        printf("Fail");
    }
}