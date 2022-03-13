#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char dumpling_store='y';
	char dumpling_beauty='y';
	int buy;
	printf("水餃店是否有開?請輸入y or n:");
	dumpling_store=getche();
	printf("\n水餃西施是否在?請輸入y or n:");
	dumpling_beauty=getche();
	buy=dumpling_store=='y' && dumpling_beauty=='y';
	printf("\n1表示買,0表示不買:%d",buy);
	return 0;
}
