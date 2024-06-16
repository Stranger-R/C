#include <stdio.h>
#include <string.h>
int main(){
        
            char str[200];
               
   
            gets(str);
            
            int sz=0;
          for(int i=0;str[i] !='\0';i++)
          {
             sz = i;
              
          }
           for(int i=sz;i>=0;i--)           
           {
               printf("%c",str[i]);           
               
           }
         
    return 0;
}