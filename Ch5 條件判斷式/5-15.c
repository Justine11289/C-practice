#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("�п�J�@�r��:");
	ascii=getchar();
	if(ascii>=65 && ascii<=90){
		printf("%c���p�g��:%c",ascii,ascii+32);
	}
	else if(ascii>=97 && ascii<=122){
		printf("%c���p�g��:%c",ascii,ascii-32);
	}
	else{
		printf("%c�����j�g�r���]�����p�g�r��",ascii);	
	}
	return 0;
} 
