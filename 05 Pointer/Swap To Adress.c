#include <stdio.h>
int s(int* a,int* b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
    return;
}
int main() 
{
    int a,b;
    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    
    s(&a,&b);
    printf("\n");
    printf("A : %d ",a);
    printf("\nB : %d ",b);
     
    return 0;
}