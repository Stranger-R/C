    // Que 1 : Given An Array Of Integers Change The Value Of All Odd Indexed Elements To Its Secound Multiple And Increment All Even Indexed Value By 10
    
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    
    int arr[n];
   

    for(int i=0;i<n;i++)
    {
       printf("Enter Array %d : ",i);
       scanf("%d",&arr[i]);
    }
    
    printf("\n\n");
    
    for(int i=0;i<n;i++)
    {
        printf("\nThe Array %d And Value : %d",i,arr[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
       
        int b = 0;
        if(i%2==0)
        
        {
             b = arr[i]+10;
            printf("\nThe Array %d And Increment 10 : %d",i,b);
        }
         int a;
        if(i%2 != 0)
        {
            a = arr[i]*2;
            printf("\nThe Array %d And Increment 10 : %d",i,a);
           
        }
    }
    

    return 0;
}