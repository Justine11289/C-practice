#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 12

int main()
{
	char month1[SIZE][7]={"�@��","�G��","�T��","�|��","����","����","�C��","�K��","�E��","�Q��","�Q�@��","�Q�G��"};
	char month2[SIZE][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	char input[10];
	int i;
	printf("�п�J����X��:");
	gets(input);
	for(i=0;i<SIZE;i++)
	{
		if(strcmp(month1[i],input)==0){
			printf("%s���^�嬰%s",input,month2[i]);
			break;
		}
	}
	return 0;
}
