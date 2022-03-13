#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("請輸入一英文小寫字母並按Enter鍵:");
	ascii=getchar();
	printf("您輸入的英文小寫字母為");
	putchar(ascii);
	printf("\n其大寫為%c",ascii-32);
	return 0;
}
