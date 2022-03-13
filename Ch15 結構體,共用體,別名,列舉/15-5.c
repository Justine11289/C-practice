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
	printf("生日:%s\n",Jack.birthday);
	printf("性別:%c\n",Jack.gender);
	printf("血型:%s\n",Jack.bloodtype);
	printf("職業:%s",Jack.job);
	return 0;
}

