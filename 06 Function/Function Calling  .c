#include <stdio.h>

int lakshman() 
{
    printf("lakshman\n");
    return 0;
}

int sita()
{
    printf("Sita\n");
    lakshman();
    return 0;
}

int ram()
{
    printf("Ram\t");
    sita();
    return 0;
}
int main() 
{
    ram();   
    return 0;
}