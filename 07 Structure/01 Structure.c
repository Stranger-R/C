#include <stdio.h>
int main() {
    
    struct car
    {
        int seat;
        int price;
        int speed;
    };
        
      struct car bmw;
      bmw.seat = 5;
      bmw.price = 2;
      bmw.speed = 200;
      
      struct car mer;
      mer.seat = 5;
      mer.price = 3;
      mer.speed = 300;
      
      printf("Bmw Spped : %d ",bmw.speed);
     printf("\nBmw Spped : %d ",mer.speed);
      
      
    return 0;
}