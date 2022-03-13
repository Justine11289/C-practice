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
	printf("請輸入工讀生編號:");
	scanf("%d",&ser.id);
	printf("請輸入工讀生姓名:");
	scanf("%s",&ser.name);
	printf("請輸入時薪:");
	scanf("%d",&ser.hour_salary);
	printf("請輸入工作時數:");
	scanf("%d",&ser.time);
	ser.month_income=calc(ser.hour_salary,ser.time);
	
	printf("\n工讀生編號:%d\n",ser.id);
	printf("工讀生姓名:%s\n",ser.name);
	printf("時薪:%d\n",ser.hour_salary);
	printf("工作時數:%d\n",ser.time);
	printf("月收入:%d\n",ser.month_income);
	return 0;
}

int calc(int i,int j)
{
	return (i*j);
}
