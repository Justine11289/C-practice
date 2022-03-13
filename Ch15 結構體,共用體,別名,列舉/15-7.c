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
}Jack={"Jack","0922233344","BK10001","復仇者聯盟24集","2018/10/12","2018/11/11"};

int main()
{
	printf("姓名:%s\n",Jack.name);
	printf("電話號碼:%s\n",Jack.phone);
	printf("書本編號:%s\n",Jack.book.no);
	printf("書本名稱:%s\n",Jack.book.name);
	printf("租出日期:%s\n",Jack.book.rentdate);
	printf("歸還日期:%s",Jack.book.returndate);
	return 0;
}
