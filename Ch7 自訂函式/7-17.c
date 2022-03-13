#include<stdio.h>
#include<stdlib.h>

int SUM(int);

int main()
{
	printf("1+2+...+100=%d",SUM(100));
	return 0;
}

int SUM(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
