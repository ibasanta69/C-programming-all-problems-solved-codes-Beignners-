//The program is Coded By Basanta Chaudhary
/*   wap to find Factorial of number using function     */
#include <stdio.h>
#include <conio.h>
int factorial(int n)
{
	long fact = 1;
	int i;
	for (i = 1; i <= n; i++)

	{
		fact *= i;
	}

	return fact;
}
void display(int x);
int main()
{
	int num;
	long f;
	printf("Enter any number:");
	scanf("%d", &num);
	f = factorial(num);
	display(f);
	
	return 0;
}
void display(int x)
{
	printf("The factorial of number:%ld", x);
}