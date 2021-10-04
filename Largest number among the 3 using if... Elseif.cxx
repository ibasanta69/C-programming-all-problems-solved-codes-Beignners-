//The program is Coded By Basanta Chaudhary
/*Wap to find largest number among the 3 numbers using if...else if        */
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
			printf("The largest Number Of A :%d", a);
		}
		else
		{
			printf("The largest Number Of C :%d", c);
		}
	}
	else if (b > c)
	{
		printf("The largest Number Of B :%d", b);
	}
	else
	{
		printf("The largest Number Of C :%d", c);
	}

return 0;
}