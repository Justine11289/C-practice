#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define F(n) 1.0/(n*n+(n+2)*(n+2))

int main()
{
	int x,i;
	float sum=0;
	printf("½Ð¿é¤Jn­È:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		sum=sum+F(i);
	}
	printf("1/(1^2+3^2)+1/(2^2+4^2)+...+1/(n^2+(n+2)^2)=%f",sum);
	return 0;
 }
