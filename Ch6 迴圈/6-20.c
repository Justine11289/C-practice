#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum1=0,sum2=0;
	printf("請輸入一整數:");
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
	printf("1~%d之奇數平方和=%d\n",n,sum1);
	printf("1~%d之偶數平方和=%d",n,sum2);
	return 0;
}
