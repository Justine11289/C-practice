#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char string[50];
	int i,length;
	int count_alpha=0,count_number=0,count_space=0,count_control=0;
	printf("�п�J�@�Ӧr��,�Ω�����C�ӿ�J���r��:");
	gets(string);
	length=strlen(string)+1;
	for(i=0;i<length;i++)
	{
		if(isalpha(string[i])!=0){
			count_alpha++;
		}
		else if(isdigit(string[i])!=0){
			count_number++;
		}
		else if(isspace(string[i])!=0){
			count_space++;
		}
		else if(iscntrl(string[i])!=0){
			count_control++;
		}
	}
	printf("�^��r����%d��\n",count_alpha);
	printf("�Ʀr��%d��\n",count_number);
	printf("�Ů榳%d��\n",count_space);
	printf("����r����%d��",count_control);
	return 0;
}
