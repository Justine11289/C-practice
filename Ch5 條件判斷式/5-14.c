#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("�п�J�@�r��:");
	ascii=getchar();
	if(ascii>=65 && ascii<=90){
		printf("%c���j�g�r��",ascii);
	}
	else if(ascii>=97 && ascii<=122){
		printf("%c���p�g�r��",ascii);
	}
	else{
		printf("%c�����j�g�r���]�����p�g�r��",ascii);	
	}
	return 0;
} 
