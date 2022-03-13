#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char string[50];
	int i,length;
	int count_big=0,count_small=0,count_number=0,count_space=0,count_control=0;
	printf("請輸入一個字串,用於檢驗每個輸入的字元:");
	gets(string);
	length=strlen(string)+1;
	for(i=0;i<length;i++)
	{
		if(isupper(string[i])!=0){
			count_big++;
		}
		else if(islower(string[i])!=0){
			count_small++;
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
	printf("英文字母大寫有%d個\n",count_big);
	printf("英文字母小寫有%d個\n",count_small);
	printf("數字有%d個\n",count_number);
	printf("空格有%d個\n",count_space);
	printf("控制字元有%d個",count_control);
	return 0;
}
