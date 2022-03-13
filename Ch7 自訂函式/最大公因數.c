#include<stdio.h>
#include<stdlib.h>

int GCD(int x,int y)
{
	int result;
	if(x%y==0){
		return y;
	} 
	else{
		result=GCD(y,x%y);
		return result; 
	}
	
}

int main()
{
	int x,y,result;
	printf("璸衡ㄢ计程そ计,叫块ㄢタ俱计:");
	scanf("%d %d",&x,&y);
	result=GCD(x,y);
	printf("%d籔%d程そ计%d",x,y,result);
	return 0;
}
