#include<stdio.h>
#include<stdlib.h>

#define PI 3.14156
#define Volume(r) 4*PI*r*r*r/3 


int main()
{
	int r;
	printf("請輸入半徑:");
	scanf("%d",&r);
	printf("球體體積=%f",Volume(r));
	return 0;
 }
