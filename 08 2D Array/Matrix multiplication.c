#include <stdio.h>
int main() {
    
    int r,c;
    printf("Enter Matrix Row Number : ");
    scanf("%d",&r);
    printf("Enter Matrix Coloum Number : ");
    scanf("%d",&c);
    
    int a[r][c];
    int b[r][c];
    printf("\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter Number Row %d And Coloum %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter Secound Matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter Number Row %d And Coloum %d : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n This Is First matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        
        printf("\n");
    }
    printf("\nThis Is Secound matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",b[i][j]);
        }
        
        printf("\n");
    }
    
    int sum[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
   printf("\nThis Matrix Is Addition Of Two Matrix\n");
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}