#include <stdio.h>
void main ()
{
    int Ram;
    
    printf("Enter Age Ram : ");
    scanf("%d",&Ram);

    int Kartik;
    printf("Enter Age Kartik : ");
    scanf("%d",&Kartik);

    int Ganesh;
    printf("Enter Age Ganesh : ");
    scanf("%d",&Ganesh);

        if(Ram<Kartik)
        {
            if(Ram<Ganesh)
            
                printf("Ram Is Youngest");
            
            else
            
                printf("Ganesh Is Youngest");
             
        }
        else
        {
            if(Kartik<Ganesh)
            printf("Kartik Is Youngest");
            
            else
            printf("Ganesh Is Youngest");

        }
        
        
}