#include <stdio.h>
int main()
{
      //  Adress Printf Use For %p
    int a=5;
    int* x=&a;
    printf("%p",&a);
    printf("\n%p",x);
    
    printf("\n%p",&x);

    return 0;
}