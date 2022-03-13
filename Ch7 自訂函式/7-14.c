#include<stdio.h>
#include<stdlib.h>

float Weight(int,float);

int main()
{
	int gender;
	float height;
	printf("請輸入您的性別(1.男 2.女):");
	scanf("%d",&gender);
	printf("請輸入您的身高:");
	scanf("%f",&height);
	printf("您的標準體重為%.2f",Weight(gender,height));
	return 0;
 }
 
float Weight(int g,float h)
{
	float w;
	if(g==1){
		w=(h-80)*0.7;
	} 
	else if(g==2){
		w=(h-70)*0.6;
	}
	return w;
}
 
