//The program is Coded By Basanta Chaudhary
/* wap to read a character from user ,using getchar() and putchar() function       */
#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	printf("Enter a character:");
	c=getchar();
	printf("Your character is:");
	putchar(c);
	
	return 0;
}