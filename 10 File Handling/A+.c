#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","a+");

    fputc('A',ptr);
    fputc(' ',ptr);
    fputs("Ram Sita Lakshman",ptr);
    fputs("The God \n",ptr);


    fclose(ptr);
    return 0;
}