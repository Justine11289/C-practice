#include<stdio.h>
#include<stdlib.h>

struct profile
{
	char birthday[11];
	char gender;
	char bloodtype[3];
	char job[10];
} Jack={"2001/10/25",'M',"O","engineer"};

int main()
{
	printf("�ͤ�:%s\n",Jack.birthday);
	printf("�ʧO:%c\n",Jack.gender);
	printf("�嫬:%s\n",Jack.bloodtype);
	printf("¾�~:%s",Jack.job);
	return 0;
}

