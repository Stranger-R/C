#include <stdio.h>

int main()
{
    int a = sizeof(char[2000]);
    printf("%d",a);
}