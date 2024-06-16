    // Que 1 : FInd The Maximum Value Out Of All The elements In The Array 


#include <stdio.h>
int main() {
    
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    
    int pr[n];
   

    for(int i=0;i<n;i++)
    {
       printf("Enter Array %d : ",i);
       scanf("%d",&pr[i]);
    }
    
    printf("\n\n");
    
    for(int i=0;i<n;i++)
    {
        printf("\nThe Array %d And Value : %d",i,pr[i]);
    }
    
    printf("\n");
    
    int max=0;
    for(int i=0;i<n;i++)
    {
       if(max<pr[i])
       {
           max = pr[i];
       }
    }
    
    printf("\nThe Product Of Array : %d ",max);
    return 0;
}