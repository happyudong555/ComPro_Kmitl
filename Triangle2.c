#include <stdio.h>

int main () {
    int i,num,j;
    scanf("%d", &num);
    // นับบรรทัด
    for (i = 1;i < num;i++) {
        // นับ *
        for (j = 1; j <= i;j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}