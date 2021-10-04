//The program is Coded By Basanta Chaudhary
/* Wap to find largest number among three numbers using Function       */
#include <conio.h>
#include <stdio.h>
int largest(int x, int y);
int main()
{
	int first, second, third, fourth, five;
	printf("Enter any Three numbers:");
	scanf("%d%d%d", &first, &second, &third);
	fourth = largest(first, second);
	five = largest(first, fourth);
	printf("The largest numbers is:%d", five);
	return 0;
}
int largest(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}