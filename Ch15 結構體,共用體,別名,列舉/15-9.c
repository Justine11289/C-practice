#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data
{
	char year[5];
	char month[3];
	char date[3];
	char weekday[10];
}today;


int main()
{
	strcpy(today.weekday,"星期三");
	printf("請輸入今天的年份:");
	scanf("%s",&today.year);
	printf("請輸入今天的月份:");
	scanf("%s",&today.month);
	printf("請輸入今天的日期:");
	scanf("%s",&today.date);
	printf("今天為%s/%s/%s %s",today.year,today.month,today.date,today.weekday);
	return 0;
}
