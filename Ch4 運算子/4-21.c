#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	int T,F;
	printf("�п�J�@�r��:");
	ch=getchar();
	T=ch>49 && ch<58;
	printf("��X1��ܬ�0~9���Ʀr,��X0�h��ܬ��D0~9���Ʀr:%d",T);
	return 0;
}
