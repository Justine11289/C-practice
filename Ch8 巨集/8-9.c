#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156
#define Volume(r) 4*PI*r*r*r/3 


int main()
{
	int r;
	printf("�п�J�b�|:");
	scanf("%d",&r);
	printf("�y����n=%f",Volume(r));
	return 0;
 }
