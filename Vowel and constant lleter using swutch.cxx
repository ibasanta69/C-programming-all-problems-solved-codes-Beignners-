//The program is Coded By Basanta Chaudhary
/*       wap to find vowel letter using switch statement */
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a':
		printf("The character is vowel letter");
		break;
	case 'i':
		printf("The character is vowel letter");
		break;
	case 'o':
		printf("The character is vowel letter");
		break;
	case 'u':
		printf("The character is vowel letter");
		break;
	case 'e':
		printf("The character is vowel letter");
		break;
	default:
		printf("The constant letter");
		break;
	}

	return 0;
}