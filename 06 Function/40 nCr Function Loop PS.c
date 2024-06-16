#include <stdio.h>
int fact(double n)
{
    double a=1;
        for(int i=1;i<=n;i++)
        {
            a = a*i;
        }
        
         return a;
        

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
        double fn =  fact(n);
        double fr =  fact(r);
        double fnr =  fact(n-r);
        
        double rs = fn/(fr*fnr);
        
        printf("nCr Is = %lf",rs);
    }
    else 
    {
        printf("N Is Not Grater Than R ");
    }
    return 0;
}