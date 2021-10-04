//The program is Coded By Basanta Chaudhary
/*  wap to find value of X^Y      */
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int x, k, y;
	printf("Enter value of X:");
	scanf("%d", &x);
	printf("\Enter value of Y:");
	scanf("%d", &y);
	k = pow(x, y);
	printf("\The value of %d^%d:%d", x, y, k);
	return 0;
}