#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156

int main()
{
	int graphics;
	float up,down,height,base,radius,area;
	printf("請選擇要計算的圖形面積(梯形輸入1,三角形輸入2,圓形輸入3):");
	scanf("%d",&graphics);
	switch(graphics)
	{
	case 1:
		printf("請輸入上底:");
		scanf("%f",&up);
		printf("請輸入下底:");
		scanf("%f",&down);
		printf("請輸入高:");
		scanf("%f",&height);
		area=(up+down)*height/2;
		printf("梯形面積:%.2f",area);
		break;
	case 2:
		printf("請輸入底:");
		scanf("%f",&base);
		printf("請輸入高:");
		scanf("%f",&height);
		area=base*height/2;
		printf("三角形面積:%.2f",area);	
		break;	
	case 3:
		printf("請輸入半徑:");
		scanf("%f",&radius);
		area=radius*radius*PI;
		printf("圓形面積:%.2f",area);
		break;		
	default:
	    printf("選擇錯誤");
    }
	return 0;
}
 
