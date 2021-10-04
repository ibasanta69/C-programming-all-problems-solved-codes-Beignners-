//The program is Coded By Basanta Chaudhary
/*   wao to displa number from 1 to n     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num,i;
	printf("Enter any number:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("%d\t", i);
		{
			if (i == 7)
			{
				break;
			}
		}
	}
	return 0;
}