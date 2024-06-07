#include <stdio.h>
int main() {
    
    int r,c;
    printf("Enter Matrix Row Number : ");
    scanf("%d",&r);
    printf("Enter Matrix Coloum Number : ");
    scanf("%d",&c);
    
    int arr[r][c];
    printf("\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter Number Row %d And Coloum %d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n\n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}