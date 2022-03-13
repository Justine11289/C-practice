#include<stdio.h>
#include<stdlib.h>

int main()
{
	int coin;
	int ten,five,one;
	int thousand,hundred,return_money;
	printf("請輸入您有的十元硬幣數量:");
	scanf("%d",&ten);
	printf("請輸入您有的五元硬幣數量:");
	scanf("%d",&five);
	printf("請輸入您有的一元硬幣數量:");
	scanf("%d",&one);
	coin=10*ten+5*five+1*one;
	thousand=coin/1000;
	hundred=coin%1000/100;
	return_money=coin%1000%100;
	printf("可換%d張千元鈔票,%d張百元鈔票,找回%d元",thousand,hundred,return_money);
	return 0;
}
