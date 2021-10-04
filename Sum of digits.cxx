//The program is Coded By Basanta Chaudhary
/*   wap to compute the sum of didigits of a given number     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, sum = 0;
	printf("Enter numbers:");
	scanf("%d", &num);
	while (num != 0)
	{

		sum += num % 10;
				num = num / 10;
	}
	printf("Sum of digits=%d", sum);
	return 0;
}