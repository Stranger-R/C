#include <stdio.h>

int main()
{

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");

    char c = fgetc(ptr);
    printf("The Character I Read Was %c\n",c);
    c = fgetc(ptr);
    printf("The Character I Read Was %c\n",c);

    fclose(ptr);
    return 0;
}