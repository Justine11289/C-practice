#include<stdio.h>
#include<stdlib.h>

int main()
{
	int coin;
	int ten,five,one;
	int thousand,hundred,return_money;
	printf("�п�J�z�����Q���w���ƶq:");
	scanf("%d",&ten);
	printf("�п�J�z���������w���ƶq:");
	scanf("%d",&five);
	printf("�п�J�z�����@���w���ƶq:");
	scanf("%d",&one);
	coin=10*ten+5*five+1*one;
	thousand=coin/1000;
	hundred=coin%1000/100;
	return_money=coin%1000%100;
	printf("�i��%d�i�d���r��,%d�i�ʤ��r��,��^%d��",thousand,hundred,return_money);
	return 0;
}
