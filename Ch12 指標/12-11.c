#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int *p[4]={array[0],array[1],array[2],array[3]};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*p[i]+j);
		}
	}
	return 0;
 } 
