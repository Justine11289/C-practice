#include<stdio.h>
#include<stdlib.h>

int main()
{
	float carbohydrate=42,protein=27.1,adipose=29,Calories;
	Calories=carbohydrate*4+protein*4+adipose*8;
	printf("總熱量為:%.2f大卡\n",Calories);
	printf("碳水化合物:%.2f%% 蛋白質:%.2f%% 脂肪:%.2f%%",carbohydrate/Calories*100,protein/Calories*100,adipose/Calories*100);
	return 0;
}
