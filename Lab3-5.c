#include <stdio.h>
// Lab3-5 created by Panjamapon Karnasuta Student ID : 60070050
int main() {

    // input
    double num1,num2;
    scanf("%lf,%lf", &num1, &num2);
    
    // ผลรวม
    double total = num1 + num2;
    printf("The sum of the given numbers : " "%f\n", total);

    // ผลต่าง
    double difference = num1 - num2;
    printf("The difference of the given numbers : " "%f\n", difference);

    // ผลคูณ
    double multiply = num1 * num2;
    printf("The product of the given numbers : " "%f\n", multiply);

    // ผลหาร
    double divide = num1 / num2;
    printf("The quotient of the given numbers : " "%f\n", divide);
}