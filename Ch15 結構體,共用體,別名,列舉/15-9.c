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
	strcpy(today.weekday,"�P���T");
	printf("�п�J���Ѫ��~��:");
	scanf("%s",&today.year);
	printf("�п�J���Ѫ����:");
	scanf("%s",&today.month);
	printf("�п�J���Ѫ����:");
	scanf("%s",&today.date);
	printf("���Ѭ�%s/%s/%s %s",today.year,today.month,today.date,today.weekday);
	return 0;
}
