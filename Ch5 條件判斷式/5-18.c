#include<stdio.h>
#include<stdlib.h>

int main()
{
	int time,salary;
	printf("�п�J�z�@�g���u�@�`�ɼ�:");
	scanf("%d",&time);
	if(time>=0 && time<=40){
		salary=180*time;
		printf("�z�@�g���~�ꬰ%d��",salary);
	}
	else if(time>=41 && time<=168){
		salary=180*40+180*1.34*(time-40);
		printf("�z�@�g���~�ꬰ%d��",salary);
	}
	else{
		printf("�ɼƤ��X�z");
	}
	return 0;
}
