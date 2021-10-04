//The program is Coded By Basanta Chaudhary
/*   wap to convert into Temperature in  fharenheit into Centigrade Temperature   */
#include <stdio.h>
#include <conio.h>
int main()
{
	float fha, centi;
	printf("Enter Temperature in fharenheit:");
	scanf("%f", &fha);
	centi = (fha - 32) * 5 / 9;
	printf("Temperature in Centigrade:%f", centi);

	return 0;
}