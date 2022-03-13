#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Factor(int);

int main()
{
	int n,result;
	printf("輸入一正整數計算出階乘:");
	scanf("%d",&n);
	result=Factor(n);
	printf("%d!=%d",n,result);
	return 0;
}

int Factor(int i)
{
	if(i==0 || i==1){
		return 1;
	}
	else{
		return i*Factor(i-1);
	}
}
