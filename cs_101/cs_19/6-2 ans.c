#include<stdio.h>
int main(){
	int n=5,count=0;
	do{
		if(n&1){
			count++;
		}
	}while((n>>=1)!=0);
	printf("count=%d",count);
	return 0;
} 
