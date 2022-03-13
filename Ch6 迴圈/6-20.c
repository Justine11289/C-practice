#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum1=0,sum2=0;
	printf("叫块俱计:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
		  sum2=sum2+(i*i);
		}
		else{
			sum1=sum1+(i*i);
		}
	}
	printf("1~%dぇ计キよ㎝=%d\n",n,sum1);
	printf("1~%dぇ案计キよ㎝=%d",n,sum2);
	return 0;
}
