#include<stdio.h>
#include<stdlib.h>                    

struct servitor
{
	int id;
	char name[16];
	int hour_salary;
	int time;
	int month_income;
}ser;


int main()
{
	int calc(int,int);
	printf("�п�J�uŪ�ͽs��:");
	scanf("%d",&ser.id);
	printf("�п�J�uŪ�ͩm�W:");
	scanf("%s",&ser.name);
	printf("�п�J���~:");
	scanf("%d",&ser.hour_salary);
	printf("�п�J�u�@�ɼ�:");
	scanf("%d",&ser.time);
	ser.month_income=calc(ser.hour_salary,ser.time);
	
	printf("\n�uŪ�ͽs��:%d\n",ser.id);
	printf("�uŪ�ͩm�W:%s\n",ser.name);
	printf("���~:%d\n",ser.hour_salary);
	printf("�u�@�ɼ�:%d\n",ser.time);
	printf("�리�J:%d\n",ser.month_income);
	return 0;
}

int calc(int i,int j)
{
	return (i*j);
}
