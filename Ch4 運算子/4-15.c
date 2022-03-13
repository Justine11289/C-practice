#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	printf("½Ð¿é¤Jx­È:");
	scanf("%d",&x);
	printf("1/x+1/x^2+1/x^3=%d",1/x+1/(x*x)+1/(x*x*x));
	return 0;
}
