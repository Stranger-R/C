#include <stdio.h>
int main() {
    
    // int r,c;
    // printf("Enter Matrix Row Number : ");
    // scanf("%d",&r);
    // printf("Enter Matrix Coloum Number : ");
    // scanf("%d",&c);
    
    // int arr[r][c];
    // printf("\n\n");
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         printf("Enter Number Row %d And Coloum %d : ",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    
    int arr[3][3] ={{2,3,6},
                    {4,5,7},
                    {7,8,5}};

    // printf("\n\n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}