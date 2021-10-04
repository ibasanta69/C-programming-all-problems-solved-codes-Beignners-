//The program is Coded By Basanta Chaudhary
/*    wap to find factorial of number     */
#include <stdio.h>
#include <conio.h>
int main()
{
	long fact = 1;
	int num;
	int i;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		fact *= i;
	}
	printf("The factorial of %d :%d", num, fact);
	return 0;
}