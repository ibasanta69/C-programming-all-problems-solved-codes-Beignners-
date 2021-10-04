//The program is Coded By Basanta Chaudhary
/* wap to check weeks and print day of weeks using switch statement       */
#include <stdio.h>
#include <conio.h>
int main()
{
	int weeks;
	printf("Enter day of week:");
	scanf("%d", &weeks);
	switch (weeks)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Fridayy");
		break;
	case 7:
		printf("Saturday");
		break;
	}

	return 0;
}