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
		printf("請選擇保險類型->1.企業團體意外保險 2.個人意外保險: ");
		scanf("%d",&choice);
	}while(choice!=1 &&choice!=2);
	
	if(choice==1){
		printf("請填寫企業名稱:");
		scanf("%s",&un.comp.comp_name);
		printf("請填寫員工姓名:");
		scanf("%s",&un.comp.employee_name);
		printf("請填寫投保額度:");
		scanf("%s",&un.comp.quota);
		printf("\n企業團體意外保險資料\n");
		printf("企業名稱:%s\n",un.comp.comp_name);
		printf("員工姓名:%s\n",un.comp.employee_name);
		printf("投保額度:%s",un.comp.quota);
	}
	else if(choice==2){
		printf("請填寫個人姓名:");
		scanf("%s",&un.ind.name);
		printf("請填寫個人電話:");
		scanf("%s",&un.ind.phone);
		printf("請填寫投保額度:");
		scanf("%s",&un.ind.quota);
		printf("\n個人意外保險資料\n");
		printf("個人姓名:%s\n",un.ind.name);
		printf("個人電話:%s\n",un.ind.phone);
		printf("投保額度:%s",un.ind.quota);
	}
	return 0;
 } 
