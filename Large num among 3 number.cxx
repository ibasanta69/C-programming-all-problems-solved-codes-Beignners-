//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Enter any three numbers:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("The A is largest Number=%d", a);
		}
		else
		{
			printf("The C is largest Number=%d", c);
		}
	}
	else if (b > c)
	{
		printf("The B is largest number=%d", b);
	}
	else
	{
		printf("The C is largest number=%d", c);
	}
	return 0;
}