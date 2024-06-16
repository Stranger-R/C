#include <stdio.h>

    //  Nesting Structure 

int main()
{
    typedef struct stock
    {
        char name[20];
        int price;
    }stock;

    typedef struct option
    {
        stock stock;
        int script;
        char cp[10];
    }option;

    option a;
    

    printf("Enter Stock Name : ");
    gets(a.stock.name);
    printf("Enter Stock Price : ");
    scanf("%d",&a.stock.price);

    
    printf("Enter Script : ");
    scanf("%d",&a.script);
    printf("Enter Script Postion : ");
    scanf("%s",a.cp);

    printf("%s\n",a.stock.name);
    printf("%d\n",a.stock.price);
    printf("%d\n",a.script);
    printf("%s\n",a.cp);
    

    
    return 0;
}