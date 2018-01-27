#include <stdio.h>
// Lab3-6 created by Panjamapon Karnasuta Student ID : 60070050
int main() {

    // input ความยาว / ความสูง
    double width, height;
    scanf("%lf", &width);
    scanf("%lf", &height);

    // out พื้นที่ของสี่เหลี่ยม
    double area = (width + height)*2;
    printf("Perimeter of rectangle = " "%.4lf", area);
    printf(" units\n");
}