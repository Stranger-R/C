#include <stdio.h>
int main(){
        
        char arr[] = "Raj";
    
         printf("%c\n",arr[1]);
         
         arr[1] = 65;
         printf("%c\n",arr[1]);
 
      for(int i=0;arr[i] != '\0';i++)
      {
          
          printf("%c",arr[i]);
      }

    
    return 0;
}