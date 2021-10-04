//The program is Coded By Basanta Chaudhary
/* wap to find square root number       */
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num, k;
	printf("Enter square number:");
	scanf("%d", &num);
	k = sqrt(num);
	printf("The square root of %d:%d", num, k);

	return 0;
}