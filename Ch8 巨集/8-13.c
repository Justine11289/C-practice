#include<stdio.h>
#include<stdlib.h>

#define F(n) n+(n+2)


int main()
{
	int x,i,sum=0;
	printf("½Ð¿é¤Jn­È:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		sum=sum+F(i);
	}
	printf("(1+3)+(2+4)+...+(n+(n+2))=%d",sum);
	return 0;
 }
