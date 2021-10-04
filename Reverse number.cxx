//The program is Coded By Basanta Chaudhary
/* wap to reverse the digits of number given       */
#include <stdio.h>
#include <conio.h>
int main()
{
long num,rev=0;
int digits;
printf("Enter a numbers:");
scanf("%ld",&num);
do{
	digits=num%10;
	rev=rev*10+digits;
	num/=10;
	
		
			}while(num!=0);
			printf("Reverse Number is:%ld",rev);
				
	return 0;
}