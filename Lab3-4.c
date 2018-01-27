#include <stdio.h>
#include <math.h>
// Lab3-4 created by Panjamapon Karnasuta Student ID : 60070050
int main() {

    // input ความยาว / ความสูง
    double width, height;
    scanf("%lf", &width);
    scanf("%lf", &height);

    double area = pow(width,2) + pow(height,2);

    //output จำนวนพื้นที่สามเหลี่ยม
    double total_area = sqrt(area);
    printf("%.2lf", total_area);
}