#include<stdio.h>
#include<stdlib.h>

float Weight(int,float);

int main()
{
	int gender;
	float height;
	printf("�п�J�z���ʧO(1.�k 2.�k):");
	scanf("%d",&gender);
	printf("�п�J�z������:");
	scanf("%f",&height);
	printf("�z���з��魫��%.2f",Weight(gender,height));
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
 
