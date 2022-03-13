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
	for(i=2;i<=n;i++)
	{
		result=result+1/SUM(i);
	}
	printf("1/2!+1/3!+...+1/%d!=%lf",n,result);
	return 0;
}

double SUM(int i)
{
	if(i>2){
		return i*SUM(i-1);
	}
	else{
		return 2;
	}
}
