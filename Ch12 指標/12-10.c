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
		printf("請輸入指標ptr1的第%d個整數:",i+1);
		scanf("%d",ptr1+i);
	}
	for(i=0;i<10;i++)
	{
		printf("請輸入指標ptr2的第%d個整數:",i+1);
		scanf("%d",ptr2+i);
	}
	
	printf("指標ptr1的5個整數:");
	for(i=0;i<5;i++)
	{
		printf("%d ",*ptr1+i);
	}
	printf("\n指標ptr2的10個整數:");
	for(i=0;i<10;i++)
	{
		printf("%d ",*ptr2+i);
	}
	return 0;
 } 
