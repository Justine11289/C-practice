#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("請輸入一西元年:");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("西元%d年為閏年",year);
			}
			else{
				printf("西元%d年為平年",year);
			}
		}
		else{
			printf("西元%d年為閏年",year);
		}
	}
	else{
		printf("西元%d年為平年",year);
	}
	return 0;
}
