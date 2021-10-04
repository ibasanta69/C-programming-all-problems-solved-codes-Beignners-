//The program is Coded By Basanta Chaudhary
/*     define function which reverse a number as arguement and returns 1 if thw number is prime otherwisw   0 */
#include <conio.h>
#include <stdio.h>
int prime(int num);
int main()
{
	int n, flag;
	printf("Enter a number:");
	scanf("%d", &n);
	flag = prime(n);
	if (flag == 1)
	{
		printf("The nunber is prime");
	}
	else
	{
		printf("The number is not prime");
	}
	return 0;
}
int prime(int num)
{
	int i;
	for (i = 2; i <num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	if (i == num)
	{
		return 1;
	}
}