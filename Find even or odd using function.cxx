//The program is coded By Basanta Chaudhary
/*

*/
#include <stdio.h>
#include <conio.h>
int Even(int x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else if (x == 1)
	{
		return 0;
	}
}
int main()
{
	int num, k;
	printf("Enter a nunber:");
	scanf("%d", &num);
	k=Even(num);
	if (k)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}