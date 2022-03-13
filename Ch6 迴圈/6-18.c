#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	do
	{
	int i,n,sum=0;
	printf("請輸入一整數:");
	scanf("%d",&n);
	do
	{
		sum=sum+(i*i);
		i++;
	}while(i<=n);
	printf("1*1+2*2+...+%d*%d=%d\n",n,n,sum);
	}while(1);
	return 0;
}
