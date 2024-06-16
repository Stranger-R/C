#include <stdio.h>
int fact(int n , int r)
{
    double a=1;
        for(int i=1;i<=n;i++)
        {
            a = a*i;
        }
        //printf("%d",a);
        
        double b=1;
        for(int i=1;i<=r;i++)
        {
            b = b*i;
        }
        //printf("%d",b);
        
        double nr = n-r;
        double c=1;
        for(int i=1;i<=nr;i++)
        {
            c = c*i;
        }
         double a1 = b*c;
         double a2 = a/a1;
         
         return a2;
        

}
int main() 
{
    double n,r;
    printf("Enter Number N : ");
    scanf("%lf",&n);

    printf("Enter Number R : ");
    scanf("%lf",&r);
    
    if(n>r)
    {
        double  s = fact(n,r);
        
        printf(" nCr Is = %lf",s);
    }
    else 
    {
        printf("N Is Not Grater Than R ");
    }
    return 0;
}