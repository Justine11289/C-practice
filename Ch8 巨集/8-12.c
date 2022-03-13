#include<stdio.h>
#include<stdlib.h>

#define F(a,b,c) (a+b+c)*(a-b-c)


int main()
{
	int a,b,c;
	printf("請輸入a值:");
	scanf("%d",&a);
	printf("請輸入b值:");
	scanf("%d",&b);
	printf("請輸入c值:");
	scanf("%d",&c);
	printf("F(a,b,c)=%d",F(a,b,c));
	return 0;
 }
