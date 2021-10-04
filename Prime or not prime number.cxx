//The program is Coded By Basanta Chaudhary
/*   wap to find prime or Not ,number enter by user and display its output     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i = 2; i < num; i++)
	{
		if (num % 2 == 0)
		{
			printf("Not Prime Number!!");
			break;
		}
	}
	if (i == num)
	{
		printf("Prime Number!!");
	}
	return 0;
}