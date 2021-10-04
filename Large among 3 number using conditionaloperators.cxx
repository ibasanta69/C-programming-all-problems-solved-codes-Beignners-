//The program is Coded By Basanta Chaudhary
/*wap to find large number aming them 3 numbers using Conditional operator        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,k;
	printf("Enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
k=	(a>b&&a>c)?a:(b>c)?b:c;
printf("The large number:%d",k);
	return 0;
}