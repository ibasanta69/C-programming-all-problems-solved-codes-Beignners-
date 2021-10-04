//The program is Coded By Basanta Chaudhary
/*  wap to read a number from user and determine large number among them 2 numbers using Condtional operators and display output on the screen      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num1, num2, large;
	printf("Enter  first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	large = (num1 > num2) ? num1 : num2;
	printf("The large Number:%d", large);
	return 0;
}