//The program is Coded By Basanta Chaudhary
/*      function with arg and return value  */
#include <conio.h>
#include <stdio.h>
int add(int a, int b)
{
	int sum;
	sum = a + b;

	return sum;
}
int main()
{
	int x, y, z;
	printf("Enter any two numbers:");
	scanf("%d%d", &x, &y);
	z = add(x, y);
	printf("The sum of two numbers:%d", z);
	return 0;
}