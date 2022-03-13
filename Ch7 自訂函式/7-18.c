#include<stdio.h>
#include<stdlib.h>

int SUM(int);

int main()
{
	int n,result=0,i;
	printf("輸入一正整數:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result+SUM(i);
	}
	printf("2+2^2+...+2^%d=%d",n,result);
	return 0;
}

int SUM(int i)
{
	if(i>1){
		return 2*SUM(i-1);
	}
	else{
		return 2;
	}
}
