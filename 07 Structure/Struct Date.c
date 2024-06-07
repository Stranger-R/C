#include <stdio.h>
int main() {
    
    // Create A Structure Date That Contains Three Members Namely Date Month And Year Create Create 2 Structure Varible With Different Date And Now Compare The Two If Date Are Equal Then Display Message Equal Otherwise Unequal; 
    
    typedef struct date
    {
        int date;
        int month;
        int year;
    }date;
    
    date a[2];
    
    for(int i=0;i<2;i++)
    {
        printf("\nEnter Detail %d\n",i+1);
        
        printf("Enter Data : ");
        scanf("%d",&a[i].date);
        printf("Enter Month : ");
        scanf("%d",&a[i].month);
        printf("Enter Year : ");
        scanf("%d",&a[i].year);
    }
    for(int i=0;i<2;i++)
    {
        printf("\n--------------------\n");
        printf("Information Date %d\n",i+1);
        
        printf("%d / %d / %d \n",a[i].date,a[i].month,a[i].year);
    }
    for(int i=0;i<1;i++)
    {
        printf("\n--------------------");
        if(a[i].date == a[i+1].date)
        {
            if(a[i].month == a[i+1].month)
            {
                if(a[i].year == a[i+1].year)
                {
                    printf("\nBoth Date Are Equal");
                }
                else{
                    printf("\nBoth Date Are UnEqual");
                }
            }
            else{
                printf("\nBoth Date Are UnEqual");
            }
        }
        else{
            printf("\nBoth Date Are UnEqual");
        }
       
    }
    
    
    
    return 0;
}