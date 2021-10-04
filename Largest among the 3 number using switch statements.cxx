//The program is Coded By Basanta Chaudhary
/*   wap to find largest among them 3  numbers using switch statements     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("Enter any three numbers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("WelCome to My Program! ")
	switch (a > b)
	{
	case 1:
		printf("The largest A=%d", a);
		break;
	case 0:
		switch (b > c)
		{
		case 1:
			printf("The largest B=%d", b);
			break;
		case 0:
			switch (a > c)
			{
			case 1:
				printf("The largest A=%d", a);
				break;
			case 0:
				printf("The largest C=%d", c);
			}
		}
	}

	return 0;
}