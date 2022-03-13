#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,n;
	double sum=0;
	printf("請輸入一整數:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
	}
	printf("1/1+1/2+...+1/%d=%.2lf",n,sum);
	return 0;
}
