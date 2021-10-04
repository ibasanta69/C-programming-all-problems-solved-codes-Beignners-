//The program is Coded By Basanta Chaudhary
/*  wap to that uses this function to find largest number among three numbers      */
#include<conio.h>
#include<stdio.h>
int greater(int x,int y){
if(x>y)
return x;
else 
return y;	
}
int main(){
int a,b,c,d,e;
	printf("Enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	d=greater(a,b);
	e=greater(a,c);
	printf("The largest numbers:%d",e);
	return 0;
}