#include <stdio.h>
int main()
{
    void India ();
    India();      
    return 0;
}

void India()
{
    printf("You Are In India\n");  
    void Australia();
    Australia();   
    return; 
}
void Australia()
{
    printf("You Are In Australia\n"); 
    void England();
    England();  
    return; 
}
void England()
{
    printf("You Are In England\n");     
    return;     
}

