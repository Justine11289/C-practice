#include<stdio.h>
#include<stdlib.h>

int main()
{
	int time,salary;
	printf("請輸入您一週的工作總時數:");
	scanf("%d",&time);
	if(time>=0 && time<=40){
		salary=180*time;
		printf("您一週之薪資為%d元",salary);
	}
	else if(time>=41 && time<=168){
		salary=180*40+180*1.34*(time-40);
		printf("您一週之薪資為%d元",salary);
	}
	else{
		printf("時數不合理");
	}
	return 0;
}
