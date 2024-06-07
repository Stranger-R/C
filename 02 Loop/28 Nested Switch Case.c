#include <stdio.h>
void main()
{
    int age,marks;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    
    printf("Enter Your Marks : ");
    scanf("%d",&marks);
    
    switch (age)
    {
        case 3:
            printf("The IS Age 3\n");
            
            switch(marks)
            {
                    case 45:
                        printf("Your Marks Is 45");
                        break;
                        
                    default:
                        printf("Your Marks Are Not 45");
            }
            break;
            
            case 15:
                printf("The Age Is 15\n");
                    
            switch(marks) 
            {
                    case 84:
                        printf("Your Marks Is 84");
                        break;
                        
                    default:
                        printf("Your Marks Is Not 84");
            }
            
        default:
            printf("Nothing Is Match");
    }
}