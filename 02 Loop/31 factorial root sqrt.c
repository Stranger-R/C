#include <stdio.h>
#include <math.h>
int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    
    int c;
    int a,b;
    int e;
    c = sqrt(n);
    
    for(int i=1;i<=c;i++)
    {
        e = n/i;
        if(e*i == n)
        {
        printf("%d , %d\n",i,e);
        
        a = i;
        b = e;
        
        }
    }
        if(a != b)
        {
        
            printf("This %d Value Not Root Value ",a,b);
        }
        else{
            printf("This %d Value  Root Value ",a,b);
        }
    
    return 0;
}