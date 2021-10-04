#include<iostream>
using namespace std;

int main()
{
int a[10], large=0, i ;
printf("enter the 10 numbers:");
for(i=0;i <10;i ++)
{
scanf("%d",&a[i] );
} 
for(i =0;i <10;i ++)
if(a[i] >large)
{
  large=a[i] ;
} 
{
printf("the largest number is :%d", large);
   } 
return 0;
}