#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=100;
	int j=100;
	{
		int i=50;
		int j=50;
		printf("i+j=%d\n",i+j);
	}
	printf("i+j=%d\n",i+j);
	return 0;
}
