#include <stdio.h>
int main() {
   
    int arr[3] = {2,3,5};
    
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);

    printf("\n");

    int str[3] = {'r','a','j'};
    
    printf("%p\n",&str[0]);
    printf("%p\n",&str[1]);
    printf("%p\n",&str[2]);
   

    return 0;
}