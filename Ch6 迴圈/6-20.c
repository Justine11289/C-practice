#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum1=0,sum2=0;
	printf("�п�J�@���:");
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
	printf("1~%d���_�ƥ���M=%d\n",n,sum1);
	printf("1~%d�����ƥ���M=%d",n,sum2);
	return 0;
}
