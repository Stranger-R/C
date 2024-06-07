#include <stdio.h>
int main() {
    
    // Program a struct for car in detail name avg and speed after declare varible / array store in any one one varible / array after that data give any varible / array ;
    // varible / array to copy varible / array 

    typedef struct car
    {
        int speed;
        char name[20];
        float avg;
    }car;
    
    car mod[3];
  
    strcpy (mod[0].name,"X");
    mod[0].speed = 200;
    mod[0].avg = 18.5;
    
        mod[1] = mod[0];
        mod[2] = mod[1];
        
     printf("%d",mod[2].speed);
    
    
    return 0;
}