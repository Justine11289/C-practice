#include<stdio.h>
#include<stdlib.h>
#include "D:\\C語言\\Ch9 前置處理\\mymath.h"

int main()
{
	int base,height;
	printf("請輸入底邊長:");
	scanf("%d",&base);
	printf("請輸入高:");
	scanf("%d",&height);
	printf("三角形面積為%.2f",Area(base,height));
	return 0;
} 
