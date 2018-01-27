#include<stdio.h>
// Lab3-3 created by Panjamapon Karnasuta Student ID : 60070050
int main(){
    // input
	int days, num,hours,minutes,seconds;
	scanf("%d",&num);

    // convert from seconds to days, hours, minutes or seconds
	days = num / 60 / 60 / 24;
    hours = (num / 60 / 60) % 24;
    minutes = (num / 60) % 60;
    seconds = num % 60;

    // output
	printf("%d", num);
	printf(" s = %d d %d h %d m %d s", days, hours, minutes, seconds);

	return 0;
}