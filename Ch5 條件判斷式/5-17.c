#include<stdio.h>
#include<stdlib.h>

int main()
{
	float height,weight,BMI;
	printf("請輸入您的體重(公斤):");
	scanf("%f",&weight);
	printf("請輸入您的身高(公尺):");
	scanf("%f",&height);
	BMI=weight/(height*height);
	if(BMI<18.5){
		printf("體重太輕");
	}
	else if(BMI>=18.5 && BMI<=23.9){
		printf("體重正常");
	}
	else if(BMI>=24 && BMI<=27.9){
		printf("體重超標");
	}
	else{
		printf("體重過胖");
	}
	return 0;
}
