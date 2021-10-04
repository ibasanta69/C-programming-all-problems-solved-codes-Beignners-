//The program is Coded By Basanta Chaudhary
/*      wao to find factirial of number using recursin function  */
#include <stdio.h>
#include <conio.h>
long factorial(int x);
int main()
{
	int num;
	long f;
	printf("Enter a number:");
	scanf("%d",&num);
	f=factorial(num);
	printf("The factorial of %d :%d",num,f);
	return 0;
}long factorial(int x){
	if(x==1)
	return 1;
	else
return x*(factorial(x-1));	
}