//The program is Coded By Basanta Chaudhary
/*   wap to find first and last number from enter number by user and its sum display     */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num, first, last, count, sum;
	printf("Enter a nunber:");
	scanf("%d", &num);
	count = log10(num);
	first = num / pow(10, count);
	last = num % 10;
	sum = first + last;
	printf("\The First Number=%d\tThe last number=%d", first, last);
	printf("\nIts sum is :%d", sum);

	return 0;
}