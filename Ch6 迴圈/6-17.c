#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	while(1)
	{
	int i=1,n;
	double sum=0;
	printf("請輸入一整數:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+(1.0/i);
		i++;
	}
	printf("1/1+1/2+...+1/%d=%.2lf\n",n,sum);
	}
	return 0;
}
