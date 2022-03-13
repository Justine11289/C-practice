#include<stdio.h>
#include<stdlib.h>

int main()
{
	int factorial=120,temp=6;
	factorial*=temp++;
	printf("6!=%d\n",factorial);
	factorial*=temp++;
	printf("7!=%d",factorial);
	return 0;
}
