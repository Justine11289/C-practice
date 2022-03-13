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
	printf("生日:%s\n",Rose->birthday);
	printf("性別:%c\n",Rose->gender);
	printf("血型:%s\n",Rose->bloodtype);
	printf("職業:%s",Rose->job);
	return 0;
}
