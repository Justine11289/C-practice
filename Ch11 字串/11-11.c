#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 12

int main()
{
	char month1[SIZE][7]={"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
	char month2[SIZE][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	char input[10];
	int i;
	printf("請輸入中文幾月:");
	gets(input);
	for(i=0;i<SIZE;i++)
	{
		if(strcmp(month1[i],input)==0){
			printf("%s的英文為%s",input,month2[i]);
			break;
		}
	}
	return 0;
}
