    // Que 1 : Calculate The Product Of All The Elements In The Given Array


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
    
    int pro=0;
    for(int i=0;i<n;i++)
    {
       pro = pro + pr[i];
    }
    
    printf("\nThe Product Of Array : %d ",pro);
    return 0;
}