#include <stdio.h>
int main() 
{                //%p Adress Print 
    int a=5;
   printf("%p",&a);
    
    int* z = &a;
    printf("\n%d",*z);
    return 0;
}