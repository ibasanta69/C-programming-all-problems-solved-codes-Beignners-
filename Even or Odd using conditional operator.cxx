//The program is Coded By Basanta Chaudhary
/*wap to read a number from user and determine Even or Odd number  using conditional operator      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a nunber:");
	scanf("%d", &num);
	(num % 2 == 0) ? printf("Even Number!") : printf("OddNumber!");
	return 0;
}