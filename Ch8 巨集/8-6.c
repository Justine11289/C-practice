#include<stdio.h>
#include<stdlib.h>

#define F(x,y) x*x+y*y

int main()
{
	int x,y;
	printf("請輸入x值:");
	scanf("%d",&x);
	printf("請輸入y值:");
	scanf("%d",&y);
	printf("%d^2+%d^2=%d",x,y,F(x,y));
	return 0;
 } 
