#include <stdio.h>
#include <string.h>
int main(){
        
            char str[200];
               
   
            gets(str);
            
            int sz=0;
          for(int i=0;str[i] !='\0';i++)
          {
             sz = i;
             printf("%c",str[i]);
              
          }
         printf("\nThe Size Of A String : %d ",sz+1);
         printf("\nNow String Is Considerd Null Char : %d",sz+2);
    return 0;
}