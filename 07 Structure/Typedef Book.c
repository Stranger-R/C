#include <stdio.h>
#include <string.h>

int main() {
    
    // Que 1 : Create A Structure Type "Book" With Name Price     And Number Of Pages As Its Attributes 
     
    typedef struct book
    {
        char name[20];
        float price;
        int page;
    }Book;
    
        Book a;
        Book b;
        Book c;
 
        strcpy(a.name,"White Book");
        a.price = 1000.2;
        a.page = 200;
            printf("\n%s",a.name);
            printf("\n%.1f",a.price);
            printf("\n%d",a.page);
            
        
        strcpy( b.name,"Alon Book");
        b.price = 1700.5;
        b.page = 500;
            printf("\n%s",b.name);
            printf("\n%.1f",b.price);
            printf("\n%d",b.page);
         
        
        strcpy(c.name,"Beautiful Book");    
        c.price = 2100.7;
        c.page = 300;
            printf("\n%s",c.name);
            printf("\n%.1f",c.price);
            printf("\n%d",c.page);
    return 0;
}