#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[20];
	char ID[11];
	char age[3];
}stud;

int main()
{
	stud s1;
	void output(stud);
	printf("請輸入姓名:");
	scanf("%s",&s1.name);
	printf("請輸入編碼:");
	scanf("%s",&s1.ID);
	printf("請輸入年齡:");
	scanf("%s",&s1.age);
	output(s1);
	return 0;
 } 
 
void output(stud s1)
{
	printf("\n學生姓名:%s\n",s1.name);
	printf("學生編碼:%s\n",s1.ID);
	printf("學生年齡:%s",s1.age);
}

