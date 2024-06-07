
#include <stdio.h>
int fun(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    return;
}
int main() {
    
    // int n;
    // printf("Enter  Number : ");
    // scanf("%d",&n);
    
    int arr[2] = {5,7};
    printf("%d , %d ",arr[0],arr[1]);
            fun(arr);
            printf("\n%d , %d ",arr[0],arr[1]);
    return 0;
}