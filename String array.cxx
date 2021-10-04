//The program is Coded By Basanta Chaudhary
/*  wap to find  read name of 5 different person using array of string and display them*/
#include <stdio.h>
#include <conio.h>
int main()
{
	char name[5][10];
	int i;
	printf("\nEnter name of 5 person\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", &name[i]);
	}
	printf("\n You have enterde 5 person name");
	for (i = 0; i < 5; i++)
	{
		printf("\n%s", name[i]);
	}
	return 0;
}