#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("�п�J�@�褸�~:");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("�褸%d�~���|�~",year);
			}
			else{
				printf("�褸%d�~�����~",year);
			}
		}
		else{
			printf("�褸%d�~���|�~",year);
		}
	}
	else{
		printf("�褸%d�~�����~",year);
	}
	return 0;
}
