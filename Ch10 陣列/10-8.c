#include<stdio.h>
#include<stdlib.h>

#define SIZE 8

int main()
{
	int array1[SIZE]={1,2,3,4,5,6,7,8};
	int array2[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		array2[i]=array1[i];
		printf("%d ",array2[i]);
	}
	return 0;
 }  
