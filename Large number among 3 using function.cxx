//The program is Coded By Basanta Chaudhary
/* wap to determine largest   number among them 3 numbers using functions     */
#include <stdio.h>
#include <conio.h>
int large(int x, int y);
int main()
{
	int a, b, c, d, e;
	printf("Enter any Three nunbers:");
	scanf("%d%d%d", &a, &b, &c);
		d = large(a, b);
	e = large(d, c);
	printf("The largest number is :%d", e);

	return 0;
}
int large(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}