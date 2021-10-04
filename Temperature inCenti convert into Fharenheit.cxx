//The program is Coded By Basanta Chaudhary
/*    wap to read Temperature in Centigrade by uers and convert into Fharenheit and display  */
#include <stdio.h>
#include <conio.h>
int main()
{
	float centi, fha;
	printf("Enter Temperature in centigrade:");
	scanf("%f", &centi);
	fha = 9.0 / 5 * centi + 32;
	printf("The Temperature in Fharenheit:%f", fha);
	return 0;
}