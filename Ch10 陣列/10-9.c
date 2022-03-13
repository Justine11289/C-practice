#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

void square(float[]);

int main()
{
	float num[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("請輸入第%d個數:",i+1);
		scanf("%f",&num[i]);
	}
	square(num);
	return 0;
 }
 
void square(float a[])
{
	int i;
	float sq=0,sum=0;
	for(i=0;i<SIZE;i++)
	{
		sq=a[i]*a[i];
		sum=sum+sq;
	}
	printf("五數平方和=%f",sum);
}
