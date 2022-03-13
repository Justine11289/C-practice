#include<stdio.h>
#include<stdlib.h>

int main()
{
	char gender;
	float height,weight;
	printf("請輸入您的性別(M/F):");
	gender=getchar();
	
	switch(gender)
	{
	case 'M':
	case 'm':
	    printf("請輸入您的身高(公分):");
		scanf("%f",&height);
		weight=(height-80)*0.7;
		printf("您的標準體重為%.2f公斤",weight);
		break;
	case 'F':
	case 'f':
	    printf("請輸入您的身高(公分):");
		scanf("%f",&height);
		weight=(height-70)*0.6;
		printf("您的標準體重為%.2f公斤",weight);
		break;
	default:
		printf("請輸入正確性別");
    }
    return 0;
		
 } 
