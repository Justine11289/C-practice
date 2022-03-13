#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum=0;
	printf("請輸入一正或負整數:");
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
	} 
	else if(n<0){
		for(i=-1;i>=n;i--)
		{
			sum=sum+i;
		}
	}
	else {
		printf("不可輸入0");
	}
	printf("0加到%d的總和=%d",n,sum);
	return 0; 
}
