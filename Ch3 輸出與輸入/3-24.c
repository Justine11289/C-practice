#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float up,down,height,area;
	printf("�п�J��Τ��W��:");
	scanf("%f",&up);
	printf("�п�J��Τ��U��:");
	scanf("%f",&down);
	printf("�п�J��Τ���:");
	scanf("%f",&height);
	area=(up+down)*height/2;
	printf("��Τ����n��%-9.3f",area);
	return 0;
 } 
