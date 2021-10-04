//The program is Coded By Basanta Chaudhary
/*wap to find factorial of number using recurive functions method        */
#include <stdio.h>
#include <conio.h>
long factorial(int x)
{
	if (x == 1)
		return 1;
	else
		return x * (factorial(x - 1));
}
int main()
{
	long f;
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	f = factorial(num);
	printf("factorial of number:%ld", f);
	return 0;
}