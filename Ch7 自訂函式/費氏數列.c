#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Fibonacci(int);

int main()
{
	int n,result;
	printf("��J�z�Q��X�O��ƦC���ĴX��:");
	scanf("%d",&n);
	result=Fibonacci(n);
	printf("�O��ƦC��%d����%d",n,result);
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
