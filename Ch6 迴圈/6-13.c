#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int width,length;
	printf("�п�J�e:");
	scanf("%d",&width);
	printf("�п�J��:");
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
