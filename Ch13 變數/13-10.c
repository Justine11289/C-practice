#include<stdio.h>
#include<stdlib.h>
#include<math.h>

static int i=2;

int main()
{
	double add(int);
	double result;
	result=add(i);
	printf("(1/2)^2+(1/3)^2+...+(1/100)^2=%lf",result);
	return 0;
}

double add(int i)
{
	double sq,sum=0;
	for(i=2;i<=100;i++)
	{
		sq=(1.0/i)*(1.0/i);
		sum=sum+sq;
	}
	return sum;
}
