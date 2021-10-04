//The program is Coded By Basanta Chaudhary
/*  wap ti find sum of natural number from 1 to n ,Entered by user      */
#include <conio.h>
#include <stdio.h>
void result(int x, int y);
int natural(int n)
{
	int i, sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int num, display;
	printf("Enter any number:");
	scanf("%d", &num);
	display = natural(num);
	result(num, display);
	return 0;
}
void result(int x, int y)
{
	printf("The sum of all natural number from n to %d:%d", x, y);
}