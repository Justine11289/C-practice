#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156
#define Circle_length(radius) 2*radius*PI
#define Circle_area(radius) radius*radius*PI

int main()
{
	int r;
	printf("�п�J�b�|:");
	scanf("%d",&r);
	printf("��P��=%f\n",Circle_length(r));
	printf("�ꭱ�n=%f",Circle_area(r));
	return 0;
 } 
