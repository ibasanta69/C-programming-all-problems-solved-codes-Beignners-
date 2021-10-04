//The program is Coded By Basanta Chaudhary
/*   multiplication Table from 5 to 10     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j;
	for (i = 5; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("\n%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}