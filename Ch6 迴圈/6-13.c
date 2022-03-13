#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int width,length;
	printf("請輸入寬:");
	scanf("%d",&width);
	printf("請輸入長:");
	scanf("%d",&length);
	
	for(i=1;i<=length;i++)
	{
		for(j=1;j<=width;j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	return 0;
}
