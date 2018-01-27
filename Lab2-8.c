#include <stdio.h>
// Lab2-8 created by : Panjamapon Karnasuta Student ID: 60070050
int main() {
    char name[30],lastName[30];
    int studentID,dd,mm,yyyy;
    float Grade;
    scanf("%s", name);
    scanf("%s", lastName);
    scanf("%d", &studentID);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    scanf("%f", &Grade);
    printf("Fullname: " "%s" " " "%s\n", name , lastName);
    printf("ID: " "%d\n", studentID);
    printf("DOB: " "%02d-%02d-%02d\n", dd,mm,yyyy);
    printf("GPA: " "%.2f\n", Grade);
 
    return 0;
}