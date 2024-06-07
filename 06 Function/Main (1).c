#include <stdio.h>
void England()
{
    printf("You Are In England\n");     //  6
    return;     //  7
}
void Australia()
{
    printf("You Are In Australia\n");   //  4
    England();    //  Calling England     //  5
    return; //  8
}
void India()
{
    printf("You Are In India\n");   //  2
    Australia();   // Calling Australia  // 3
    return; //  9
}

int main()
{
    India();      //  Calling India  // 1
    return 0;
}