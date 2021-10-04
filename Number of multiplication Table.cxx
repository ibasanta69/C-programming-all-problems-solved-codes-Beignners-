//The program is Coded By Basanta Chaudhary
/*   wap to print number of multiplication Table of given number     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i;
	printf("Enter Number of Multiplication Table:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		printf("\n%d*%d=%d", num, i, num * i);
		
		
	}
	return 0;
}