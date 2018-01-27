#include <stdio.h>
// Lab2-10 created by : Panjamapon Karnasuta Student ID: 60070050
int main()
{
    char ascii1, ascii2, ascii3, ascii4, ascii5;
 
    // convert a to b
 
    scanf("%s", &ascii1);
 
    ascii1 += 1;
 
    printf("%c\n", ascii1);
 
    // convert A to A
 
    scanf("%s", &ascii2);
    printf("%c\n", ascii2);
 
    // convert x to y
    scanf("%s", &ascii3);
 
    ascii3 += 1;
 
    printf("%c\n", ascii3);
 
    // convert X to X
    scanf("%s", &ascii4);
    printf("%c\n", ascii4);
 
    // convert y to z
    scanf("%s", &ascii5);
 
    ascii5 += 1;
 
    printf("%c\n", ascii5);
 
    return 0;
 
}