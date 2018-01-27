#include <stdio.h>
int main() {

    int D,d;

    float pi = 3.1416;

    scanf("%d", &D);
    scanf("%d", &d);

    int RD = D/2;

    int Rd = d/2;

    float areaD = pi * RD * RD;

    float aread = pi * Rd * Rd;

    float total = areaD - aread;
    printf("%.5f\n", total);

    float boderD = 2 * pi * RD;

    float boderd = 2 * pi * Rd;

    float borderTotal = boderD + boderd;

    printf("%.4f\n", borderTotal);

    return 0;
}