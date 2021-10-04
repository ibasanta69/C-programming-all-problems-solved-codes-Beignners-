//The program is Coded By Basanta Chaudhary
/*   wap to find add of two numbers using user-defjne     */
#include <stdio.h>
#include <conio.h>
int add(int x, int y)
{
	int a;
	a = x + y;
	return a;
}
void display(int value)
{
	printf("The value is:%d", value);
}
int main()
{
	int b, c, d;
	printf("Enter any two numbers:");
	scanf("%d%d", &b, &c);
	d = add(b, c);
	display(d);
	return 0;
}
