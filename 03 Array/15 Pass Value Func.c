
#include <stdio.h>
int fun(int n)
{
    n = 7;
    return;
}
int main() {
    
    int n;
    printf("Enter  Number : ");
    scanf("%d",&n);

    printf("\nA : %d",n);
    fun(n);
    
    printf("\nA : %d",n);
    return 0;
}