#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum=0;
	printf("�п�J�@���έt���:");
	scanf("%d",&n);
	if(n>0){
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
	} 
	else if(n<0){
		for(i=-1;i>=n;i--)
		{
			sum=sum+i;
		}
	}
	else {
		printf("���i��J0");
	}
	printf("0�[��%d���`�M=%d",n,sum);
	return 0; 
}
