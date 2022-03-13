#include<stdio.h>
#include<stdlib.h>

typedef struct date
{
	char year[5];
	char month[3];
	char date[3];
}today;

int main()
{
	today t={"2021","8","6"};
	printf("今天日期:%s/%s/%s",t.year,t.month,t.date);
	return 0;
 } 
