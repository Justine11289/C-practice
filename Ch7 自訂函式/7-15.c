#include<stdio.h>
#include<stdlib.h>

void BMI(float,float);

int main()
{
	float height,weight;
	printf("請輸入您的身高(公尺):");
	scanf("%f",&height);
	printf("請輸入您的體重(公斤):");
	scanf("%f",&weight);
	BMI(height,weight);
	return 0;
 }
 
void BMI(float h,float w)
{
	float bmi;
	bmi=w/h/h;
	if(bmi<18.5){
		printf("您的BMI值為%.2f,體重太輕",bmi);
	}
	else if(bmi>=18.5 && bmi<=23.9){
		printf("您的BMI值為%.2f,體重正常",bmi);
	}
	else if(bmi>=24 && bmi<=27.9){
		printf("您的BMI值為%.2f,體重超標",bmi);
	}
	else{
		printf("您的BMI值為%.2f,體重過胖",bmi);
	}
	return;
}
 
