
#include <stdio.h>
int fun(int arr[])
{
    arr[2]= 5;
    return;
}
int main() {
    
    // int n;
    // printf("Enter  Number : ");
    // scanf("%d",&n);
    
    int arr[5] = {5,7,9,2,1};
    printf("\n%d",arr[2]);
    
        fun(arr);
    printf("\n%d",arr[2]);
    return 0;
}