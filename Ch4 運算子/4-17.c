#include<stdio.h>
#include<stdlib.h>

int main()
{
	float kg;
	printf("請輸入公斤數:");
	scanf("%f",&kg);
	printf("%.2f公斤=%.2f英磅",kg,kg*2.2);
	return 0;
}
