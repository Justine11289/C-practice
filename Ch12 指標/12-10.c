#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr1,*ptr2;
	ptr1=(int *)malloc(sizeof(int)*5);
	ptr2=(int *)malloc(sizeof(int)*10);
	int i;
	for(i=0;i<5;i++)
	{
		printf("�п�J����ptr1����%d�Ӿ��:",i+1);
		scanf("%d",ptr1+i);
	}
	for(i=0;i<10;i++)
	{
		printf("�п�J����ptr2����%d�Ӿ��:",i+1);
		scanf("%d",ptr2+i);
	}
	
	printf("����ptr1��5�Ӿ��:");
	for(i=0;i<5;i++)
	{
		printf("%d ",*ptr1+i);
	}
	printf("\n����ptr2��10�Ӿ��:");
	for(i=0;i<10;i++)
	{
		printf("%d ",*ptr2+i);
	}
	return 0;
 } 
