#include <stdio.h>
int main()
{
       
        int a[3];
        
        for(int i=0;i<3;i++)
        {
            printf("Enter Value %d : ",i+1);
            scanf("%d",&a[i]);
        }
        printf("\n%d",a[0]);
    return 0;
}