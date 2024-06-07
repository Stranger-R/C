
// Que 1 = Given An Array Of Marks Of Students If The Mark Of Any Student Is Less Than 35 Print Its Roll Number 
//     [Roll Number Here Refer To The Index Of The Array]



#include <stdio.h>
int main()
{
    int n;
    printf("Enter Student Number : ");
    scanf("%d",&n);
    

       int marks[n];
       
       for(int i=0;i<n;i++)
       {
           printf("Enter Roll Number (Index) %d : ",i);
           scanf("%d",&marks[i]);
       }
       
       for(int i=0;i<n;i++)
       {
          if(marks[i]<35)
          {
              printf("\n%d",i);
          }
        
       }
    return 0;
}