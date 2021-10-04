//The program is Coded By Basanta Chaudhary
/*        */
#include <conio.h>
#include <stdio.h>
int findfactorial(int num);
int main()
{
	int n;
	long f;
	printf("Enter any number:");
	scanf("%d", &n);
	f = findfactorial(n);
	printf("The factorial of number:%d", f);
	return 0;
}
int findfactorial(int num)
{
	long fact = 1;
	int i;
	for (i = 1;i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}