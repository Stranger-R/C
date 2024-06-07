#include <stdio.h>
int main() 
{
    int a = 5;
    int* r = &a;
    
    int b = 7;
    int* j = &b;
    
    printf("\n%p",r);
    printf("\n\nn%p",j);
    return 0;
}