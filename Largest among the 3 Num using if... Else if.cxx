//The program is Coded By Basanta Chaudhary
/*  wap to find largest number among them using if...else if statements      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Enter Three Numbers:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("The Largest Number of A=%d", a);
		}
		else
		{
			printf("The Largest Number of C=%d", c);
		}
	}
	else if (b > c)
	{
		printf("The Largest Number of B=%d", b);
	}
	else
	{
		printf("The Largest Number of C=%d", c);
	}
	return 0;
}