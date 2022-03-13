#include<stdio.h>
#include<stdlib.h>

#define Add(x,y) x+y 
#define Subtract(x,y) x-y 
#define Multiply(x,y) x*y 
#define Divide(x,y) 1.0*x/y 


int main()
{
	int x,y;
	printf("請輸入x值:");
	scanf("%d",&x);
	printf("請輸入y值:");
	scanf("%d",&y);
	printf("x+y=%d\n",Add(x,y));
	printf("x-y=%d\n",Subtract(x,y));
	printf("x*y=%d\n",Multiply(x,y));
	printf("x/y=%lf",Divide(x,y));
	return 0;
 }
