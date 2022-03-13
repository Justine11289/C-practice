#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int i=0,j;
	char name[10],phone[11];
	int age;
	char title1[]="姓名	  電話         	  年齡\n";
	char title2[]="------------------------------\n";
	FILE *pfin,*pfout;
	pfin=fopen("Ch16_03.txt","r");
	pfout=fopen("friends.txt","w");
	if(pfin==NULL || pfout==NULL){
		printf("檔案開啟失敗");
		exit(1);
	}
	else{
		fputs(title1,pfout);
		fputs(title2,pfout);
		while(fscanf(pfin,"%s %s %d",name,phone,&age)!=EOF){
			fprintf(pfout,"%s\t %11s\t %3d\n",name,phone,age);
		}
	}
	fclose(pfin);
	fclose(pfout);
	return 0;
}
