#include <stdio.h>

int main () {
    int i,num,j;
    scanf("%d", &num);

    // นับบรรทัด
    for (i = 0;i < num;i++) {
        // นับ *
        for (j = 0; j <= i;j++) {
            printf("*");
        }
        printf("\n");
    }
}