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
	struct profile *Rose;
	Rose=&Jack;
	printf("�ͤ�:%s\n",Rose->birthday);
	printf("�ʧO:%c\n",Rose->gender);
	printf("�嫬:%s\n",Rose->bloodtype);
	printf("¾�~:%s",Rose->job);
	return 0;
}
