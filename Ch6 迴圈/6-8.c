#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,total=0;
	for(i=100;i>=1;i--)
	{
		total=total+i;
	}
	printf("100+99+...+2+1=%d",total);
	return 0;
}
