//The program is Coded By Basanta Chaudhary
/*  wap to read marks of seven subjects and Name of students ,calculate  percentage   and display its   */
#include <stdio.h>
#include <conio.h>
int main()
{
	char name[30];
	float total, percent;
	float math, eng, phy, pro, chem, com, draw;
	printf("Enter Student Name:");
	scanf("%s", name);
	printf("Enter Marks of Seven subjects:");
	scanf("%f%f%f%f%f%f%f",&math,&phy,&chem,&pro,&com,&draw,&eng);
	total=math+phy+eng+draw+chem+pro+com;
	percent=total/7;
	printf("The percentage of %s is %f",name,percent);
	return 0;
}