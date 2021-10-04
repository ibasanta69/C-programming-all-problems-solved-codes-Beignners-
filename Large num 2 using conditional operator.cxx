//The program is Coded By Basanta Chaudhary
/*  wap to read two numbers from user and determine large number using conditinal operator      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	c = (a > b) ? a : b;
	printf("The large number is:%d", c);
	return 0;
}