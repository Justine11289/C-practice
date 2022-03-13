#include<stdio.h>
#include<stdlib.h>

void primeFactor(int,int);

int main()
{
	int number,divide;
	printf("請輸入一欲計算因數分解的正整數:");
	scanf("%d",&number);
	printf("%d=",number);
	primeFactor(number,2);
	return 0;
}

void primeFactor(int num,int div)
{
	if(num==1 || div>num){
		printf("\b \n");
		return;
	}
	else if(num%div==0){
		printf("%d*",div);
		primeFactor(num/div,div);
	}
	else{
		div=(div==2?3:div+2);
		primeFactor(num,div);
	}
 } 
