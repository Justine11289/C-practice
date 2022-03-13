#include<stdio.h>
#include<stdlib.h>

int add1(int,int);
int i=100;

int main()
{
	int j=50;
	printf("i+j=%d\n",add1(i,j));
	return 0;	
 } 
 
int add1(int x,int y)
{
	return (x+y);
}
