//The program is Coded By Basanta Chaudhary
/*    wap to read chracter from user and using putchar and getchar    */
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	ch = getchar();
	printf("You have entered character:");
	putchar(ch);
	return 0;
}