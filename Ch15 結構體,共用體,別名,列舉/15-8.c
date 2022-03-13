#include<stdio.h>
#include<stdlib.h>

struct data
{
	char year[5];
	char month[3];
	char date[3];
}today;


int main()
{
	printf("請輸入今天的年份:");
	scanf("%s",&today.year);
	printf("請輸入今天的月份:");
	scanf("%s",&today.month);
	printf("請輸入今天的日期:");
	scanf("%s",&today.date);
	printf("今天為%s/%s/%s",today.year,today.month,today.date);
	return 0;
}
