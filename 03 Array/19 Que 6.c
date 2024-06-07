    // Que 1 : Find The Difference Between the Of Elements At Even Indices To The Sum Of elements At Odd Indices
    
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
    
    int o=0;
    int e=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e = e + arr[i];
        }
        if(i%2 != 0)
        {
            o = o + arr[i];
        }
    }
    printf("\n\n");
    
    int mai = e-o;
    printf("\nThe Sum Of Even : %d",e);
    printf("\nThe Sum Of Odd  : %d",o);
    
    printf("\nThe Array Sum Of Even - Odd :  %d ",mai);
    
    return 0;
}