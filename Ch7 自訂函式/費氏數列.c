#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Fibonacci(int);

int main()
{
	int n,result;
	printf("輸入您想算出費氏數列的第幾項:");
	scanf("%d",&n);
	result=Fibonacci(n);
	printf("費氏數列第%d項為%d",n,result);
	return 0;
}

int Fibonacci(int i)
{
	if(i>2){
		return Fibonacci(i-2)+Fibonacci(i-1);
	}
	else{
		return 1;
	}
}
