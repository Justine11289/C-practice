#include<stdio.h>
#include<stdlib.h>

int main()
{
	int option,money;
	printf("�п�ܤ��:1.���35000��,�믲399�� 2.�j��2�~,���15000��,�믲1599��: ");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
		money=35000+399*12*2;
		printf("��ú%d��",money);
		break;
	case 2:
		money=15000+1599*12*2;
		printf("��ú%d��",money);
		break;		
	default:
	    printf("��׿�ܿ��~");
    }
	return 0;
 } 
