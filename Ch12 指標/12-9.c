#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[10];
	int brray[20];
	int *ptr,i;
	ptr=array;
	for(i=0;i<10;i++)
	{
		printf("%p\n",ptr[i]);
	}
	
	ptr=brray;
	for(i=0;i<20;i++)
	{
		printf("%p\n",ptr[i]);
	}
	return 0;
 } 
