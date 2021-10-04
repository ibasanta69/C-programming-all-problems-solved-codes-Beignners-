//The program is Coded By Basanta Chaudhary
/* wap to printf Aphabets From [a-z]
using for loop statements       */
#include <stdio.h>
#include <conio.h>
int main()
{
	int i;
	printf("\nYou have Print Alphabets from [a-z] With ASCI Codes!");
	for(i=65;i<=90;i++){
printf("\n\t%c=[%d]",i,i);		
	}
	return 0;
}