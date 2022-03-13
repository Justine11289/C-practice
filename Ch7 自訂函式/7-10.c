#include<stdio.h>
#include<stdlib.h>

int MAX(int,int);

int main()
{
	int i,j;
	printf("請輸入兩數:");
	scanf("%d %d",&i,&j);
	printf("%d為最大值",MAX(i,j));
	return 0;
 }
 
int MAX(int n,int m)
{
	if(n>m){
		return n;
	}
	else{
		return m;
	}
}  
