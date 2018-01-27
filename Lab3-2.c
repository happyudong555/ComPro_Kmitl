#include <stdio.h>
// Lab3-2 created by Panjamapon Karnasuta Student ID : 60070050
int main() {

   // input number
   float num1, num2, num3, num4;
   scanf("%f", &num1);
   scanf("%f", &num2);
   scanf("%f", &num3);
   scanf("%f", &num4);

   // total price
   float total = num1 + num2 + num3 + num4;

   // Average price
   float avg = total/4.0;
   printf("Summation is " "%.2f\n", total);
   printf("Average is " "%.3f\n", avg);
}