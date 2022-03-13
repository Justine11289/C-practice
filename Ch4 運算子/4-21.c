#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	int T,F;
	printf("請輸入一字元:");
	ch=getchar();
	T=ch>49 && ch<58;
	printf("輸出1表示為0~9之數字,輸出0則表示為非0~9之數字:%d",T);
	return 0;
}
