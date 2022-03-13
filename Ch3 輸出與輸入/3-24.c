#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float up,down,height,area;
	printf("請輸入梯形之上底:");
	scanf("%f",&up);
	printf("請輸入梯形之下底:");
	scanf("%f",&down);
	printf("請輸入梯形之高:");
	scanf("%f",&height);
	area=(up+down)*height/2;
	printf("梯形之面積為%-9.3f",area);
	return 0;
 } 
