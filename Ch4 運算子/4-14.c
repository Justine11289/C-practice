#include<stdio.h>
#include<stdlib.h>

int main()
{
	float carbohydrate=42,protein=27.1,adipose=29,Calories;
	Calories=carbohydrate*4+protein*4+adipose*8;
	printf("�`���q��:%.2f�j�d\n",Calories);
	printf("�Ҥ��ƦX��:%.2f%% �J�ս�:%.2f%% �ת�:%.2f%%",carbohydrate/Calories*100,protein/Calories*100,adipose/Calories*100);
	return 0;
}
