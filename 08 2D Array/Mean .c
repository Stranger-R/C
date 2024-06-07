#include <stdio.h>

int main()
{
    int a;
    printf("How Many X : ");
    scanf("%d",&a);
  
    int x[a];
    int f[a];
    int d[a];
    int fd[a];
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
        
    int z;
    printf("Assume Mean : ");
    scanf("%d",&z);
    
        for(int i=1;i<=a;i++)
        {
             d[i] = x[i]-z;   
        }
        
        
        for(int i=1;i<=a;i++)
        {
             fd[i] = f[i] * d[i];
            
        }
        
        float fdsum=0;
        for(int i=1;i<=a;i++)
        {
            fdsum = fdsum + fd[i];    
        }
        float fsum=0;
        for(int i=1;i<=a;i++)
        {
            fsum = fsum + ( f[i] );    
        }
        

        printf("\nx    f    d    fd\n");
        for(int i=1;i<=a;i++)
        {
            printf("%d    %d    %d    %d\n",x[i],f[i],d[i],fd[i]);
        }
        
     
        
          float sigma = fdsum/fsum;
         
          float end = z + sigma;
        
        printf("\nThe Sum Of frequency : %f ",fsum);
        printf("\nThe Sum Of FD : %f",fdsum);
        
        printf("\nThe Mean Of This Example : %.3f",end);
        
        
}
