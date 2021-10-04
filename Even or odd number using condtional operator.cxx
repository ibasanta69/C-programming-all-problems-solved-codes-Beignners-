//The program is Coded By Basanta Chaudhary
/* wap to find Even or Odd number enter from user       */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	(num % 2 == 0) ? printf("Even Number!") : printf("Odd Number!");
	return 0;
}