#include<stdio.h>
#include<stdlib.h>

int main()
{
	float height,weight,BMI;
	printf("�п�J�z���魫(����):");
	scanf("%f",&weight);
	printf("�п�J�z������(����):");
	scanf("%f",&height);
	BMI=weight/(height*height);
	if(BMI<18.5){
		printf("�魫�ӻ�");
	}
	else if(BMI>=18.5 && BMI<=23.9){
		printf("�魫���`");
	}
	else if(BMI>=24 && BMI<=27.9){
		printf("�魫�W��");
	}
	else{
		printf("�魫�L�D");
	}
	return 0;
}
