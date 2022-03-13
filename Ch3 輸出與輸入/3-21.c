#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("請輸入33~126之間的整數:");
	scanf("%d",&ascii);
	printf("%d對應的ASCII碼為",ascii);
	putchar(ascii);
	return 0;
}
