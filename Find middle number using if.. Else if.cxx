//The program is coded By Basanta Chaudhary
/*

*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Enter any three numbers:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
		{
			printf("middle Number=%d", b);
		}
		else if (c > a)
		{
			printf("Middle Number=%d", a);
		}
		else
		{
			printf("middle=%d", c);
		}
	}
	else
	{
		if ( b<c)
		{
			printf("Middle Number=%d", b);
		}
		else if (c<a)
		{
			printf("Middle=%d", a);
		}
		else
		{
			printf("Middle=%d", c);
		}
	}
	return 0;
}