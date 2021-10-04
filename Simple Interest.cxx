//The program is Coded By Basanta Chaudhary
/*  wap to find simple Interest      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int p,t,r,SI;
	printf("Enter principle:\tTime:\tRate:\n");
	scanf("\t%d\t%d\t%d",&p,&t,&r);
	SI=p*t*r;
	printf("The Simple Interest:%d",SI);
	return 0;
}