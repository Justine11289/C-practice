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
	printf("�п�J���Ѫ��~��:");
	scanf("%s",&today.year);
	printf("�п�J���Ѫ����:");
	scanf("%s",&today.month);
	printf("�п�J���Ѫ����:");
	scanf("%s",&today.date);
	printf("���Ѭ�%s/%s/%s",today.year,today.month,today.date);
	return 0;
}
