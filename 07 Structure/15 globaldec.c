#include <stdio.h>

    // Global Declaration Programe Using With Function
    // Structure With Function

typedef struct book
{
    char name[30];
    int price;
}book;

int change(book c)
{
    c.price = 150;
    return c.price;
}
int show(book x)
{
    x.price = 200;
    change(x);
    printf("%s\n",x.name);
    printf("%d\n",x.price);
    return;
}

int main()
{
    book a;

    printf("enter book name : ");
    gets(a.name);
    printf("enter book price : ");
    scanf("%d",&a.price);

    show(a);

    return;
}