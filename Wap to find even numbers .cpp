#include<iostream>
using namespace std;

int main()
{
    int num, i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    if(i%2!=0)
    continue;
    
    printf("\n%d", i);
   } 
    return 0;
}