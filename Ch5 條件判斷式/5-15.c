#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("請輸入一字元:");
	ascii=getchar();
	if(ascii>=65 && ascii<=90){
		printf("%c的小寫為:%c",ascii,ascii+32);
	}
	else if(ascii>=97 && ascii<=122){
		printf("%c的小寫為:%c",ascii,ascii-32);
	}
	else{
		printf("%c不為大寫字母也不為小寫字母",ascii);	
	}
	return 0;
} 
