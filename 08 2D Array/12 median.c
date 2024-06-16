#include <stdio.h>

int main()
{
    int a;
    printf("How Many X : ");
    scanf("%d",&a);
  
    int x[a];
    int f[a];
    int fx[a];
    int c[a];
    int cf=0;
    int n2;
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
        
        int fsum=0;
        for(int i=1;i<=a;i++)
        {
            cf = cf + f[i];
            c[i] = cf ;
            
            fsum = fsum + f[i];
        }
        
        n2 = cf/2;
      int  c1,c2;
      for(int i=0;i<=a;i++)
    {
        printf("%d\n",c[i]);
    }
        for(int i=0;i<=a;i++)
        {
            for(int j=i+1;j>=i;j--)
            {
                if(c[i] < n2 && c[j] > n2)
            {
                c1 = i;
                c2 = j ;
            }
            else{
                
            }
            }
        }
        
        int ir;
        for(int i=2;i<=a;i++)
        {
            ir = x[i] - x[i-1];
        }
       
       float n = fsum/2;
       float median1 =  ( n - c[c1] / f[c2]) *ir ;
      float median2 = x[c2] * median1;
       
       printf("%d\n",x[c2]);
       printf("%f\n",n);
       printf("%d\n",c[c1]);
       printf("%d\n",f[c2]);
       printf("%d\n",ir);
        // printf("\nx     f     fd     c\n");
        // for(int i=1;i<=a;i++)
        // {
        //     printf("%d    %d    %d\n",x[i],f[i],fx[i]);
        // }
        
        
}
