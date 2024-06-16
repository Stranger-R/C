#include <stdio.h>

int main()
{
    int a;
    printf("How Many X : ");
    scanf("%d",&a);
  
    int x[a];
    int f[a];
    int fx[a];
        for(int i=1;i<=a;i++)
        {
            printf("Enter Number Series x Bar %d : ",i);
            scanf("%d",&x[i]);
        }
        
        for(int i=1;i<=a;i++)
        {
            printf("Enter Number Series frequency %d : ",i);
            scanf("%d",&f[i]);
        }
        for(int i=1;i<=a;i++)
        {
            fx[i] = f[i] * x[i];
        }
        
        printf("\nx    f    fd\n");
        for(int i=1;i<=a;i++)
        {
            printf("%d    %d    %d\n",x[i],f[i],fx[i]);
        }
        
        float fdsum=0;
        float fsum=0;
        for(int i=1;i<=a;i++)
        {
            fdsum += fx[i];
            fsum += f[i];
        }
        
        float mean = fdsum/fsum;
        
        printf("\nThe Mean Of This Example : %.3f",mean);
}
