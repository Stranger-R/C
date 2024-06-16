#include <stdio.h>
//#include <string.h>
int main(){
        
        char s1[] = "physics wallah";
        char s2[] = "College wallah";
        
        char* p1 = s1;
        char* p2 = s2;
        
    
          p1 = p2;
          
          s2[1] = 'P';
            
            printf("%s\n",p1);
            printf("%s\n",p2);
      
    return 0;
}