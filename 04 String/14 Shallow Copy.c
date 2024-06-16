#include <stdio.h>
//#include <string.h>
int main(){
        
        char s1[] = "physics wallah";
        char* s2 = s1;
        
//    Shallow Copy Base On Pointer 
    
        s1[0] = 'P';
        printf("%s\n",s2);

      
    return 0;
}