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
	printf("�п�J�m�W:");
	scanf("%s",&s1.name);
	printf("�п�J�s�X:");
	scanf("%s",&s1.ID);
	printf("�п�J�~��:");
	scanf("%s",&s1.age);
	output(s1);
	return 0;
 } 
 
void output(stud s1)
{
	printf("\n�ǥͩm�W:%s\n",s1.name);
	printf("�ǥͽs�X:%s\n",s1.ID);
	printf("�ǥͦ~��:%s",s1.age);
}

