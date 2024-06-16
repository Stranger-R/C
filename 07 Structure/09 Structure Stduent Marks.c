#include <stdio.h>
#include <string.h>


int main() {
    
    typedef struct mark
    {
        int roll[20];
        int physics[20];
        int chemistry[20];
        int maths[20];
        float avg1[20];
        float avg2[20];
    }mark;
    
    int n;
    printf("How Many Student : ");
    scanf("%d",&n);
    
     mark stu[n];
     
    float sa[n];
    
    for(int i=0;i<n;i++)
    {
        
            printf("Enter Student Number %d\n",i+1);
            
            printf("Enter Physics Marks : ");
            scanf("%d",&stu[i].physics[i]);
            printf("Enter Chemistry Marks : ");
            scanf("%d",&stu[i].chemistry[i]);
            printf("Enter Maths Marks : ");
            scanf("%d",&stu[i].maths[i]);
            
        stu[i].avg1[i] = stu[i].maths[i] + 
                        stu[i].chemistry[i]
                        + stu[i].physics[i] ;
                        
            stu[i].avg2[i] = stu[i].avg1[i] / 3;
        
    }
     

    for(int i=0;i<n;i++)
    {
    
        printf("\n");
        
         printf("\nStudent Number %d",i+1);
        
        printf("\nPyhsics   : %d ",stu[i].physics[i]);
        printf("\nChemistry : %d ",stu[i].chemistry[i]);
        printf("\nMaths     : %d ",stu[i].maths[i]);
        printf("\nAvgrage   : %.2f",stu[i].avg2[i]);
    }
    float r1=0;

    for(int i=0;i<n;i++)
    {
        if(stu[i].avg2[i] > r1 )
        {
            r1 = stu[i].avg2[i];
        }
    }
    float r2=0;
    for(int i=0;i<n;i++)
    {
        if(r1 != stu[i].avg2[i] && r2 < stu[i].avg2[i])
        {
            r2 = stu[i].avg2[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(r1 == stu[i].avg2[i])
        {
            printf("\nRank 1 \nStudent Number  %d Result Is : %.2f",i+1,stu[i].avg2[i]);
          
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(r2 == stu[i].avg2[i])
        {
            printf("\nRank 2 \nStudent Number  %d Result Is : %.2f",i+1,stu[i].avg2[i]);
          
        }
    }
    
    return 0;
}