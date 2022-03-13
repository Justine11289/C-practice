#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char string[50];
	int i,length;
	int count_alpha=0,count_number=0,count_space=0,count_control=0;
	printf("請輸入一個字串,用於檢驗每個輸入的字元:");
	gets(string);
	length=strlen(string)+1;
	for(i=0;i<length;i++)
	{
		if(isalpha(string[i])!=0){
			count_alpha++;
		}
		else if(isdigit(string[i])!=0){
			count_number++;
		}
		else if(isspace(string[i])!=0){
			count_space++;
		}
		else if(iscntrl(string[i])!=0){
			count_control++;
		}
	}
	printf("英文字母有%d個\n",count_alpha);
	printf("數字有%d個\n",count_number);
	printf("空格有%d個\n",count_space);
	printf("控制字元有%d個",count_control);
	return 0;
}
