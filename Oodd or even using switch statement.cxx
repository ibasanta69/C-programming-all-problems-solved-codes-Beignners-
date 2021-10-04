//The program is Coded By Basanta Chaudhary
/*find odd and even number using switch statement        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter any number:");
	scanf("%d", &num);
	switch (num%2)
	{
	case 0:
		printf("The even number:");
		break;
	case 1:
		printf("The  odd number");
		break;
	}

	return 0;
}