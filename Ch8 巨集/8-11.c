#include<stdio.h>
#include<stdlib.h>

#define F(x,y) 3.0*x/2/y 


int main()
{
	int x,y;
	printf("請輸入x值:");
	scanf("%d",&x);
	printf("請輸入y值:");
	scanf("%d",&y);
	printf("3x/2y=%lf",F(x,y));
	return 0;
 }
