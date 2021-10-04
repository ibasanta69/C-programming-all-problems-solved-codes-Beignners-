//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter any characeter:");
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90)
	{
		printf("The upperercase:%c", ch);
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("lowercase:%c", ch);
	}
	return 0;
}