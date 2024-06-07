#include <stdio.h>
#include <string.h>
int main(){
    
    //  This Is Deep Copy Paste 
    //  This Is strcpy Is String To String Copy To Anthor String Paste And Anthor String And This String Is Both Are Different  
    
        char s1[20] = "Raj Jethva";
        char s2[20];
        
        strcpy (s2,s1);
        
        s2[0] = 'r';
       
        printf("%s\n",s1);
        printf("%s\n",s2);
            
            
          
      
    return 0;
}