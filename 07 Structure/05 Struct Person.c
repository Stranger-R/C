#include <stdio.h>
#include <string.h>
int main() {
    
    // Que 1 : Create Structure Type Person With Name Salary Age As Its ASttributed Declare Initialize 2 Varibales For This Print Name Of First Person Age Of The Other
    
    struct Person
    {
        char name[20];
        int salary;
        int age;
    };
        
        struct Person a;
        strcpy(a.name,"Ved");
        a.salary = 1;
        a.age = 25;
            printf("\nName : %s",a.name);
            printf("\nSalary : %dCr",a.salary);
            printf("\nAge : %d",a.age);
    
    printf("\n");
      
        struct Person b;
        strcpy(b.name,"Jethalal");
        b.salary = 3;
        b.age = 27;
            printf("\nName : %s",b.name);
            printf("\nSalary : %dCr",b.salary);
            printf("\nAge : %d",b.age);
            
    
    return 0;
}