#include<stdio.h>
#include<stdlib.h>

int sum;

int main()
{
	int arr[2][3]={20,21,22,23,24,25};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("°}¦C¤¸¯ÀÁ`©M=%d",sum);
	return 0;
}
