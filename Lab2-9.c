#include <stdio.h>
// Lab2-9 created by : Panjamapon Karnasuta Student ID: 60070050
int main() {
    char fname1[100],sname1[100], fname2[100], sname2[100], fname3[100], sname3[100];
    
    scanf("%s", fname1);
    scanf("%s", sname1);
    printf("Person 1: " "%s" " " "%s\n", fname1, sname1);

    scanf("%s" "%s", fname2, sname2);
    printf("Person 2: " "%s" " " "%s\n", fname2, sname2);

    scanf("%s" "%s", fname3, sname3);
    printf("Person 3: " "%s" " " "%s\n", fname3, sname3);

    return 0;
}