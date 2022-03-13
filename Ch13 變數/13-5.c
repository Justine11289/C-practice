#include<stdio.h>
#include<stdlib.h>

void add2(int);
static int i=100;

int main()
{
	int j=50;
	add2(j);
	printf("i=%d\n",i);
	return 0;
}

void add2(int k)
{
	i=i+k;
}
