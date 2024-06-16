#include <stdio.h>
#include <stdlib.h>

int main()
{
    
   

    int n;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);

    int *ptr;

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Array Of %d And Enter Number : ",i);
        scanf("%d", &ptr[i]);
    }
    
    for (int  i = 0; i < n; i++)
    {
        printf("The Array %d And Value : %d \n",i,ptr[i]);
    }

    // Use Realloc
    // Size Increase Ya Dicrease 


    // printf("Enter Size Of Array Free Memory : ");
    // scanf("%d",&n);

    printf("/n");
   
//    free(ptr);

        free(ptr);


    ptr[n - 1] = ptr[1];
    
    
    for (int  i = 0; i < n; i++)
    {
        printf("The Array %d And Value : %d \n",i,ptr[i]);
    }
    


    return 0;
}