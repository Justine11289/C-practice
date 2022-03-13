#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156
#define Circle_length(radius) 2*radius*PI
#define Circle_area(radius) radius*radius*PI

int main()
{
	int r;
	printf("請輸入半徑:");
	scanf("%d",&r);
	printf("圓周長=%f\n",Circle_length(r));
	printf("圓面積=%f",Circle_area(r));
	return 0;
 } 
