    // Que 1 : Find The The Total Number Of Pairs In the array whose sum is equal to the given value x 
    
#include <stdio.h>
int main()
{
    
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a;
    printf("Enter Sum For Array : ");
    scanf("%d",&a);
    
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
    
   int count=0;
   int z;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<=n;j++)
       {
          
           
           if(a == arr[i]+arr[j])
           {
               count++;
           }

       }
       
    }
    printf("%d",count);
    
    return 0;
}