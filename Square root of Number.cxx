//The program is Coded By Basanta Chaudhary
/*  wap to enter any numbers and its square roots      */
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	x = sqrt(x);
	printf("The square root of number:%d", x);

	return 0;
}