#include <stdio.h>
int main() {
    
    int r,c;
    printf("Enter Matrix Row Number : ");
    scanf("%d",&r);
    printf("Enter Matrix Row Number : ");
    scanf("%d",&c);
    
    int a[r][c];
    
    printf("\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter Number Row %d And Coloum %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    

    printf("\n This Is  matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        
        printf("\n");
    }
    
  
    int sum=0;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             if(a[i][j]>=sum)
             {
                 sum = a[i][j];
             }
             else{
                 
             }
        }
        
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             if(sum == a[i][j])
             {
                printf("The Sum Of Elemetns Is %d And Index Is  : %d , %d  ",sum,i,j);
             }
             else{
                 
             }
        }
        
    }
       

    
    
    
   
    return 0;
}