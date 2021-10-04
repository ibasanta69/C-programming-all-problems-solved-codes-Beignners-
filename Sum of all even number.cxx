//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	int i, sum = 0;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			printf("\n%d", i);
		}
	}
	printf("\nSum of all Even number=%d", sum);
	return 0;
}