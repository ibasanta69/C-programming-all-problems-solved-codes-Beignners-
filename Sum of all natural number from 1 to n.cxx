//The program is Coded By Basanta Chaudhary
/*  wap to find sum of all natural number from 1 to n      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i, sum = 0;
	printf("Enter a number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		
	sum+=i;
		
	}
	printf("The sum of all natural number from 0 to %d :%d",num,sum);
	return 0;
}