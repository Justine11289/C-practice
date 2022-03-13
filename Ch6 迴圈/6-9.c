#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,total=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0){
		  total=total+i;
		}	
	}
	printf("1~100之偶數總和=%d",total);
	return 0;
}
