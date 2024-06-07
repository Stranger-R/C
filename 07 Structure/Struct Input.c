#include <stdio.h>
int main() {
    
    struct car
    {
        int seat;
        float price;
        int speed;
    }bmw,mer;
        
      
      bmw.seat = 5;
      printf("Enter BMW Car Price : ");
      scanf("%f",&bmw.price);
      printf("\nBMW Car Price Is : %.2fCr",bmw.price);
      bmw.speed = 200;
      
      mer.seat = 5;
      mer.price = 3;
      mer.speed = 300;
      
    
     printf("\nBmw Spped : %d ",mer.speed);
      
      
    return 0;
}