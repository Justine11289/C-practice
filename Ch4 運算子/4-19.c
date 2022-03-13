#include<stdio.h>
#include<stdlib.h>

int main()
{
	float salary;
	salary=140*(1+1/3)*2+140*(1+2/3);
	printf("至少支付%.2f元的加班費",salary);
	return 0;
}
