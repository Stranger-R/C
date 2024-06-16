#include <stdio.h>
#include <string.h>
typedef int* ptr;
int main() {
    
    int x = 5, y = 7;
    ptr a = &x, b = &y;
    
        // Both Are Considerd To pointer For 
        // Reason Is Decler Typedef 
    printf("%p\n",a);
     printf("%p\n",b);
    
    return 0;
}