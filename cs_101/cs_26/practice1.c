#include<stdio.h>
int main(){
	int num=999,sum=0;
	while (num>0) 
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("Sum of digits=%d",sum);
}
