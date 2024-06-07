#include <stdio.h>
int main() {
      //  Adress Printf Use For %p
    int a=5;
    int* x=&a;
    
    printf("\n%p : ADress Of A",x);
    printf("\n%p : Adress Of X",&x);
    printf("\n\n%d : Show Of Value Box Of X In Store",*x);
    
    return 0;
}