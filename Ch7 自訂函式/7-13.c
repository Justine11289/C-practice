#include<stdio.h>
#include<stdlib.h>

int F(int,int);

int main()
{
	int x,y;
	printf("請輸入x值:");
	scanf("%d",&x);
	printf("請輸入y值:");
	scanf("%d",&y);
	printf("F(x)=%d",F(x,y));
	return 0;
 }
 
int F(int n,int m)
{
	int f;
	f=n*n+m*m;
	return f;
}  
