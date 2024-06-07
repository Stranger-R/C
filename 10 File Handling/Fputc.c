#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","w");

    fputc('A',ptr);
    fclose(ptr);
    return 0;
}