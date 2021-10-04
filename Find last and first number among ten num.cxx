//The program is Coded By Basanta Chaudhary
/*     find last and first number among them 6 numbers    */
#include <stdio.h>
#include<math.h>
#include <conio.h>
int main()
{
	int num,count,first,last;
	printf("Enter any number:");
	scanf("%d",&num);
	count=log10(num);
	first=num/pow(10,count);
	last=num%10;
	printf("first=%d\tlast=%d",first,last);
	return 0;
}