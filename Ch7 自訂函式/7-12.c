#include<stdio.h>
#include<stdlib.h>

int F(int);

int main()
{
	int x;
	printf("½Ð¿é¤Jx­È:");
	scanf("%d",&x);
	printf("F(x)=%d",F(x));
	return 0;
 }
 
int F(int n)
{
	int f;
	f=n*n*n+2*n*n+1;
	return f;
}  
