#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char dumpling_store='y';
	char dumpling_beauty='y';
	int buy;
	printf("���婱�O�_���}?�п�Jy or n:");
	dumpling_store=getche();
	printf("\n�����I�O�_�b?�п�Jy or n:");
	dumpling_beauty=getche();
	buy=dumpling_store=='y' && dumpling_beauty=='y';
	printf("\n1��ܶR,0��ܤ��R:%d",buy);
	return 0;
}
