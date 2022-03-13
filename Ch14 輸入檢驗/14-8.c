#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char phone[10];
	int i,length,count_num=0;
	printf("請輸入您的手機號碼(不需要隔開):");
	gets(phone);
	length=strlen(phone);
	if(length==10){
		if(phone[0]=='0'){
			for(i=0;i<length;i++)
			{
				if(isdigit(phone[i])!=0){
					count_num++;
				}
			}
			if(count_num==10){
				printf("輸入正確");
			}
			else{
				printf("輸入錯誤");
			}
		}
		else{
			printf("輸入錯誤");
		}
	}
	else{
		printf("輸入錯誤");
	}
	return 0;	
} 
