#include<stdio.h>
#include<stdlib.h>

struct books
{
	char no[8];
	char name[40];
	char rentdate[11];
	char returndate[11];
};

struct member
{
	char name[16];
	char phone[11];
	struct books book;
}Jack={"Jack","0922233344","BK10001","�_�����p��24��","2018/10/12","2018/11/11"};

int main()
{
	printf("�m�W:%s\n",Jack.name);
	printf("�q�ܸ��X:%s\n",Jack.phone);
	printf("�ѥ��s��:%s\n",Jack.book.no);
	printf("�ѥ��W��:%s\n",Jack.book.name);
	printf("���X���:%s\n",Jack.book.rentdate);
	printf("�k�٤��:%s",Jack.book.returndate);
	return 0;
}
