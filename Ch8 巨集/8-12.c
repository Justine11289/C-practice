#include<stdio.h>
#include<stdlib.h>

#define F(a,b,c) (a+b+c)*(a-b-c)


int main()
{
	int a,b,c;
	printf("�п�Ja��:");
	scanf("%d",&a);
	printf("�п�Jb��:");
	scanf("%d",&b);
	printf("�п�Jc��:");
	scanf("%d",&c);
	printf("F(a,b,c)=%d",F(a,b,c));
	return 0;
 }
