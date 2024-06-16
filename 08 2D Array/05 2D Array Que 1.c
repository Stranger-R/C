#include <stdio.h>
int main() {
    
    int r,c;
    printf("How Many Student : ");
    scanf("%d",&r);
    printf("How Many Subject : ");
    scanf("%d",&c);
    
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c+1;j++)
        {
            if(j==0){
            for(int a=0;a<=0;a++)
            {
                printf("Enter Roll Number : ");
                scanf("%d",&arr[i][j]);
            }
            }
            else{
                printf("Enter Marks : ");
            scanf("%d",&arr[i][j]);
            }
        }
    }
    
    printf("\n Roll Num Marks\n");
     for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c+1;j++)
        {
            printf("%d        ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}