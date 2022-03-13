#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double SUM(int);

int main()
{
	int n,i;
	double result;
	printf("輸入一正整數:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result+SUM(i);
	}
	printf("1/2+1/(2^2)+...+1/(2^%d)=%lf",n,result);
	return 0;
}

double SUM(int i)
{
	if(i>1){
		return SUM(i-1)/2;
	}
	else{
		return 0.5;
	}
}
