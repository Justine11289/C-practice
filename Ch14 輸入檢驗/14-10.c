#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char string[50];
	int i,length;
	int count_big=0,count_small=0,count_number=0,count_space=0,count_control=0;
	printf("�п�J�@�Ӧr��,�Ω�����C�ӿ�J���r��:");
	gets(string);
	length=strlen(string)+1;
	for(i=0;i<length;i++)
	{
		if(isupper(string[i])!=0){
			count_big++;
		}
		else if(islower(string[i])!=0){
			count_small++;
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
	printf("�^��r���j�g��%d��\n",count_big);
	printf("�^��r���p�g��%d��\n",count_small);
	printf("�Ʀr��%d��\n",count_number);
	printf("�Ů榳%d��\n",count_space);
	printf("����r����%d��",count_control);
	return 0;
}
