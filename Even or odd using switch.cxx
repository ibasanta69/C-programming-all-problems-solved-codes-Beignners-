//The program is Coded By Basanta Chaudhary
/* wap to find even or odd nunber using switch statements       */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	switch (num % 2)
	{
	case 1:
		printf("Odd number");
		break;
	case 0:
		printf("Even number");
		break;
	}
	return 0;
}