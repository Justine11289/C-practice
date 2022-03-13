#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void square(int[]);

int main()
{
	int num[SIZE]={1,2,3,4,5,6,7,8,9,10};
	square(num);
	return 0;
}

void square(int a[])
{
	int i,sq=0,sum=0;
	for(i=0;i<SIZE;i++)
	{
		sq=a[i]*a[i];
		sum=sum+sq;
	}
	printf("¥­¤è©M=%d",sum);
}
