#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,n,sum=0;
	printf("�п�J�@���:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("1*1+2*2+...+%d*%d=%d",n,n,sum);
	return 0;
}
