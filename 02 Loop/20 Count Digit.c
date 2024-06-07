#include <stdio.h>
void main()
{
    int num;
    int count = 0;
    printf("Enter The Number : ");
    scanf("%d",&num);

    if(num==0)
    printf("There Are 1 Digit In Your Numbe");
    
    else
    {
        while(num!=0)
        {
             num = num/10;
             count++;
        }
        printf("There Are %d Digit In Your Numbe",count);
    }
}