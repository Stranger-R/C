#include <stdio.h>
void main()
{
    int num;
    printf("Enter Your Phone Number : ");
    scanf("%d",&num);
    
    switch (num)
    {
        case 9924161909:
            printf("\n\nThe Number Detail\n");
            printf("The Number Is Raj Jethva\n");
            printf("The Sim Card Is Jio\n");
            printf("He Is Corrent Ahmedabad\n");
            break;
            
         case 9978388520:
            printf("\n\nThe Number Detail\n");
            printf("The Number Is JituBhai Jethva\n");
            printf("The Sim Card Is Jio\n");
            printf("He Is Corrent Ahmedabad\n");
            break;
            
         case 9664792092:
            printf("\n\nThe Number Detail\n");
            printf("The Number Is Riddhi Jethva\n");
            printf("The Sim Card Is Jio\n");
            printf("She Is Corrent Ahmedabad\n");
            break;
            
         case 9724161909:
            printf("\n\nThe Number Detail\n");
            printf("The Number Is DaxaBen Jethva\n");
            printf("The Sim Card Is Jio\n");
            printf("She Is Corrent Ahmedabad\n");
            break;
            
        default:
            printf("The Number Is Not Matching");
    }
}