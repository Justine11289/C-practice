#include<stdio.h>
#include<stdlib.h>

void BMI(float,float);

int main()
{
	float height,weight;
	printf("�п�J�z������(����):");
	scanf("%f",&height);
	printf("�п�J�z���魫(����):");
	scanf("%f",&weight);
	BMI(height,weight);
	return 0;
 }
 
void BMI(float h,float w)
{
	float bmi;
	bmi=w/h/h;
	if(bmi<18.5){
		printf("�z��BMI�Ȭ�%.2f,�魫�ӻ�",bmi);
	}
	else if(bmi>=18.5 && bmi<=23.9){
		printf("�z��BMI�Ȭ�%.2f,�魫���`",bmi);
	}
	else if(bmi>=24 && bmi<=27.9){
		printf("�z��BMI�Ȭ�%.2f,�魫�W��",bmi);
	}
	else{
		printf("�z��BMI�Ȭ�%.2f,�魫�L�D",bmi);
	}
	return;
}
 
