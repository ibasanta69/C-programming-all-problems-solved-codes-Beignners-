//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int x, y, z;
	printf("Enter any two numbers:");
	scanf("%d%d", &x, &y);
	z = pow(x, y);
	printf("The value of X^Y:%d", z);
	return 0;
}