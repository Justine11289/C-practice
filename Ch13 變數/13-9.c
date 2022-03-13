#include<stdio.h>
#include<stdlib.h>

int sum;

int main()
{
	int add3();
	int result;
	result=add3();
	printf("2+4+6+...+100=%d",result);
	return 0;
}

int add3()
{
	static int i,sum=0;
	for(i=2;i<=100;i=i+2)
	{
		sum=sum+i;
	}
	return sum;
}
