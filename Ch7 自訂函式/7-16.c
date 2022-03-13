#include<stdio.h>
#include<stdlib.h>

int LCM(int,int);

int main()
{
	int n,m,result;
	printf("璸衡ㄢ计程そ计,叫块ㄢタ俱计:");
	scanf("%d %d",&n,&m);
	result=LCM(n,m);
	printf("%d籔%d程そ计LCM=%d",n,m,result);
	return 0;
 } 
 
int LCM(int x,int y)
{
	int ans=1,i=2;
	if(x>=i && y>=i){
		for(i=2;i<=100;i++)
		{
		if(x%i==0 && y%i==0){
		ans=ans*i;
		x=x/i;
		y=y/i;
		}
		}
	}
	return ans*x*y;
}
