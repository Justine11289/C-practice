#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[5]={2,3,4,5,6};
	int* Arr;
	int i;
	Arr=array;
	for(i=0;i<5;i++)
	{
		printf("¦ì§}%pªº­È¬°%d\n",&Arr[i],Arr[i]);
	}
	return 0;
 } 
