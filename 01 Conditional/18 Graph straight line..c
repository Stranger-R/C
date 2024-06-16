#include <stdio.h>
void main()
{
    float x1,x2,x3,y1,y2,y3,m,n;
    
    printf("Enter Value X1 And Y1 : ");
    scanf("%f%f",&x1,&y1);
    
    printf("Enter Value X2 And y2 : ");
    scanf("%f%f",&x2,&y2);
    
    printf("Enter Value X3 And Y3 : ");
    scanf("%f%f",&x3,&y3);
    
    m = (y2-y1)/
        (x2-x1);
    
    n = (y3-y2)/
        (x3-x2);
        
    if (m = n)
    {
       printf("All 3 points lie on the same line\n");
    }
    else
    {
       printf("All 3 points do not the same line\n");
    }
}