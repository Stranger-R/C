#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r+");

    char str[100];
    fgets(str, 5, ptr);


    fclose(ptr);
    return 0;
}