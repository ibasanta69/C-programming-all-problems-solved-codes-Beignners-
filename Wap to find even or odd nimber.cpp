//WAP to find odd or even number
// The program is coded by Basanta chaudharu
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
int num,remainder;
printf("enter the number:");
scanf("%d", &num);
remainder=num%2;
if(remainder==0)
{ 
printf("the number is even");
} 
else
{
printf("the number is odd");
} 
    return 0;
}