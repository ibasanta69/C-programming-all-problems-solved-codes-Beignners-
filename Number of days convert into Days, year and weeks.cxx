//The program is Coded By Basanta Chaudhary
/*   wpa to find days convert into years,weeks and days     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int days, weeks, years;
	printf("enter number of days:");
	scanf("%d", &days);
	years = days / 365;
	weeks = days % 365 / 7;
	days = days - (years * 365 + (weeks * 7));
	printf("years:%d\tweeks:%d\tdays:%d", years, weeks, days);

	return 0;
}