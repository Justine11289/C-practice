#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156

int main()
{
	int graphics;
	float up,down,height,base,radius,area;
	printf("�п�ܭn�p�⪺�ϧέ��n(��ο�J1,�T���ο�J2,��ο�J3):");
	scanf("%d",&graphics);
	switch(graphics)
	{
	case 1:
		printf("�п�J�W��:");
		scanf("%f",&up);
		printf("�п�J�U��:");
		scanf("%f",&down);
		printf("�п�J��:");
		scanf("%f",&height);
		area=(up+down)*height/2;
		printf("��έ��n:%.2f",area);
		break;
	case 2:
		printf("�п�J��:");
		scanf("%f",&base);
		printf("�п�J��:");
		scanf("%f",&height);
		area=base*height/2;
		printf("�T���έ��n:%.2f",area);	
		break;	
	case 3:
		printf("�п�J�b�|:");
		scanf("%f",&radius);
		area=radius*radius*PI;
		printf("��έ��n:%.2f",area);
		break;		
	default:
	    printf("��ܿ��~");
    }
	return 0;
}
 
