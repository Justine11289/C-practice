#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define F(n) 1.0/n

int main()
{
	int x,i;
	float sum=0;
	printf("½Ð¿é¤Jn­È:");
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	{
		if(i%2==0){
		  sum=sum+F(i);	
		}
		else{
			sum=sum-F(i);
		}
	}
	printf("1/2-1/3+1/4-1/5...+1/n=%f",sum);
	return 0;
 }
