#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct company
{
	char comp_name[30];
	char employee_name[20];
	char quota[5];
};

struct individual
{
	char name[30];
	char phone[20];
	char quota[5];
};

union data
{
	struct company comp;
	struct individual ind;
}un;

int main()
{
	int choice;
	do{
		printf("�п�ܫO�I����->1.���~����N�~�O�I 2.�ӤH�N�~�O�I: ");
		scanf("%d",&choice);
	}while(choice!=1 &&choice!=2);
	
	if(choice==1){
		printf("�ж�g���~�W��:");
		scanf("%s",&un.comp.comp_name);
		printf("�ж�g���u�m�W:");
		scanf("%s",&un.comp.employee_name);
		printf("�ж�g��O�B��:");
		scanf("%s",&un.comp.quota);
		printf("\n���~����N�~�O�I���\n");
		printf("���~�W��:%s\n",un.comp.comp_name);
		printf("���u�m�W:%s\n",un.comp.employee_name);
		printf("��O�B��:%s",un.comp.quota);
	}
	else if(choice==2){
		printf("�ж�g�ӤH�m�W:");
		scanf("%s",&un.ind.name);
		printf("�ж�g�ӤH�q��:");
		scanf("%s",&un.ind.phone);
		printf("�ж�g��O�B��:");
		scanf("%s",&un.ind.quota);
		printf("\n�ӤH�N�~�O�I���\n");
		printf("�ӤH�m�W:%s\n",un.ind.name);
		printf("�ӤH�q��:%s\n",un.ind.phone);
		printf("��O�B��:%s",un.ind.quota);
	}
	return 0;
 } 
