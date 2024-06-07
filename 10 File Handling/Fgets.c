#include <stdio.h>

int main()
{

    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");

    char str[10];
    fgets(str , 100 , ptr);

    printf("The String Is %s\n",str);

    fclose(ptr);
    return 0;
}