#include<stdio.h>
#include<stdlib.h>

int main()
{
	int password=1111;
	int input,times=0;
	do
	{
		printf("歡迎!請插入卡片並輸入預設密碼:");
		scanf("%d",&input);
		if(password==input){
			printf("密碼正確");
		}
		else{
			times++; 
			if(times==3){
				printf("三次輸入密碼錯誤,請確認您的密碼\n");				
			}
		}
	}while(password!=input);
	return 0;
}
