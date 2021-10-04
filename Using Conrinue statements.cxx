//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		{
			if (i == 7)
			{
				continue;
			}
		}
		printf("%d\t", i);
	}
	return 0;
}