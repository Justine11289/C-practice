#include<stdio.h>
#include<stdlib.h>

int main()
{
	int result;
	int func();
	result=func();
	printf("���G=%d\n",result);
	return 0;
}
int func(void)
{
	static int i=50;
	i++;
	return i;
}
