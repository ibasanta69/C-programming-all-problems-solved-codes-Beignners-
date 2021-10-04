//The program is Coded By Basanta Chaudhary
/*  wap to read number of seconds convert into   hours,minutes and seconds  */
#include <stdio.h>
#include <conio.h>
int main()
{
	int seconds, hours, minutes;
	printf("Enter number of seconds:");
	scanf("%d", &seconds);
	hours = seconds / 3600;
	minutes = seconds % 3600 / 60;
	seconds = seconds - ((hours * 3600) + (minutes * 60));
	printf("Hours=%d\tMinutes=%d\tSeconds=%d", hours, minutes, seconds);
	return 0;
}