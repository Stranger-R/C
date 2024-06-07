#include <stdio.h>

int lakshman() //   9
{
    printf("lakshman\n");   //  10
    return 0;   // End Of This Function     //  11
}

int sita()  //  6
{
    printf("Sita\n");   //  7
    lakshman(); // Call Lakshman    //  8 
    return 0;   // 12
}

int ram()   //  3
{
    printf("Ram\t");    //  4
    sita();     // Call sita    //  5
    return 0;   //  13
}
int main()  //  1
{
    ram();   // Call Ram    //  2
    return 0;   //  14
}