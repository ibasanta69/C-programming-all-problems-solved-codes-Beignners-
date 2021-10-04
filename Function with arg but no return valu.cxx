//The program is Coded By Basanta Chaudhary
/*        */
#include <conio.h>
#include <stdio.h>
int add(int a, int b)
{
	int sum;
	sum = a + b;
	printf("The sumof two numbers is:%d", sum);
}

int main()
{
	int x, y, d;

	printf("Enter any two numbers:");
	scanf("%d%d", &x, &y);
	d = add(x, y);

	return 0;
}