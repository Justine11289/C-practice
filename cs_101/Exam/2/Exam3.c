#include<stdio.h>
int main(){
	int a=12345678,i=5,sum=0;
	for(int j=1;a!=0;j++){
		if(j<i){
			sum+=(a%10);
		}
		else {
			sum-=(a%10);
		}
		a/=10;
	}
	printf("%d",sum);
}
