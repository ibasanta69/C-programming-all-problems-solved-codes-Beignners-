//The program is Coded By Basanta Chaudhary
/*   wap to check wether it is alphabet kr not     */
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c", &ch);
	if ((ch >= 97 && ch<=122) || (ch >= 65 &&ch<=90))
	{
		printf("The character is alphabet");
	}
	else
	{
		printf("The character is not alphabet");
	}
	return 0;
}