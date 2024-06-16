#include <stdio.h>

int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int match;
        float avg;
    }crk;
    
    int n;
    printf("How Many Cricketer Details Enter : ");
    scanf("%d",&n);
    
    crk player[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Cricketer Details %d\n",i+1);
        
        printf("Enter Cricketer Name : ");
        scanf("%s",player[i].name);
        
        printf("Enter Crickter Age : ");
        scanf("%d",&player[i].age);
        
        printf("Enter Crickter Number Of Matches :");
        scanf("%d",&player[i].match);
        
        printf("Enter Crickter Average Run : ");
        scanf("%f",&player[i].avg);
        
    }
    for(int i=0;i<n;i++)
    {
      
        printf("\n-----------------------\n");
        printf("\nCricketer %s Detail \n",player[i].name);
        
        printf("\nCrickter Name : %s",player[i].name);
        printf("\nCrickter Age : %d Km/H",player[i].age);
        printf("\nCrickter Number Of Matches : %.2fCr",player[i].match);
        printf("\nCrickter Average Runs : %.2f",player[i].avg);
    }

    return 0;
}