#include<stdio.h>
#include<stdlib.h>

int main()
{
	char gender;
	float height,weight;
	printf("�п�J�z���ʧO(M/F):");
	gender=getchar();
	
	switch(gender)
	{
	case 'M':
	case 'm':
	    printf("�п�J�z������(����):");
		scanf("%f",&height);
		weight=(height-80)*0.7;
		printf("�z���з��魫��%.2f����",weight);
		break;
	case 'F':
	case 'f':
	    printf("�п�J�z������(����):");
		scanf("%f",&height);
		weight=(height-70)*0.6;
		printf("�z���з��魫��%.2f����",weight);
		break;
	default:
		printf("�п�J���T�ʧO");
    }
    return 0;
		
 } 
