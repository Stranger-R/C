#include <stdio.h>

int main()
{
    typedef struct car
    {
        char name[20];
        int speed;
        float price;
    }car;
    
    int n;
    printf("How Many Car Details Enter : ");
    scanf("%d",&n);
    
    car mod[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\n Car Detail Number %d\n",i+1);
        
        printf("Enter Car Name : ");
        scanf("%s",mod[i].name);
        
        printf("Enter Car Speed : ");
        scanf("%d",&mod[i].speed);
        
        printf("Enter Car Price :");
        scanf("%f",&mod[i].price);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nn-----------------------");
        printf("\nCar %s Detail ",mod[i].name);
        
            printf("\nCar Name  : %s",mod[i].name);
            printf("\nCar Speed : %d Km/H",mod[i].speed);
            printf("\nCar Price : %.2fCr",mod[i].price);
    }

    return 0;
}