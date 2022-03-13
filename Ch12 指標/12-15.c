#include<stdio.h>
#include<stdlib.h>

int main()
{
	void *p;
	int sum;
	int add(void*,int);
	p=(char*)malloc(sizeof(char)*26);
	sum=add(p,26);
	printf("A~Z的ASCII碼總和為%d",sum);
	return 0;
}

int add(void *p,int n)
{
	int sum_char=0,i;
	int *pp1;
	pp1=(int*)p;
	for(i=0;i<n;i++)
	{
		*(pp1+i)=65+i;
		printf("%c的ASCII碼為%d\n",(*pp1+i),(*pp1+i));
		sum_char=sum_char+(*pp1+i);
	}
	return sum_char;
}
