#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ascii;
	printf("�п�J�@�^��p�g�r���ë�Enter��:");
	ascii=getchar();
	printf("�z��J���^��p�g�r����");
	putchar(ascii);
	printf("\n��j�g��%c",ascii-32);
	return 0;
}
