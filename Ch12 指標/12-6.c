#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr1,a=1;
	int *ptr2,b=2;
	ptr1=&a;
	ptr2=&b;
	printf("��}%p���Ȭ�%d\n",ptr1,*ptr1);
	printf("��}%p���Ȭ�%d",ptr2,*ptr2);
	return 0;
 } 
