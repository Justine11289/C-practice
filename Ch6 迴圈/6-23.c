#include<stdio.h>
#include<stdlib.h>

int main()
{
	int password=1111;
	int input,times=0;
	do
	{
		printf("�w��!�д��J�d���ÿ�J�w�]�K�X:");
		scanf("%d",&input);
		if(password==input){
			printf("�K�X���T");
		}
		else{
			times++; 
			if(times==3){
				printf("�T����J�K�X���~,�нT�{�z���K�X\n");				
			}
		}
	}while(password!=input);
	return 0;
}
