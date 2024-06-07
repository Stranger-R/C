#include <stdio.h>
#include <string.h>
int main(){
    
    // This Program Is Stirng Input And After Any Character Enter And That Character Break (Out) That String After Print String
    // string Enter Any One charcter Count That Character How Many Time Repeat That Character In This String Count That Character 


    char str[200];
    
    printf("Enter String : ");
    
    gets(str);
    puts(str);
    
    char a;
    long  count=0;
    printf("Enter Any One Character  : ");
    scanf("%c",&a);
    
    for(int i=0;str[i] !='\0';i++)
    {
        if(a!=str[i])
        {
            printf("%c",str[i]);
            
        }
        else{
            count++;
        }
    }
      printf("\n%ld",count);
    return 0;
}