#include <stdio.h>
#include <string.h>
int main(){
        
            char str[200];
            gets(str);
    
           char* ptr = str;
           
        //   pointer is just only first charchter address store after array rule line by line store charchter after pointer++  address to give  next by next value to show 
        //   This Is not justify string a all about depend upon address 
           
        int i=0;
        while(*ptr != '\0')
        {
            printf("%c",*ptr);
            ptr++;
            i++;
        }
        
         
    return 0;
}