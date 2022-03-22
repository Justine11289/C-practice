#include<stdio.h> 
void plus(int n){
	int sum=0;
	if(n>=0){
		for(int i=n;i>0;){
			sum+=i%10;
			i/=10;
		}
	}
	else{
		for(int i=n;i<0;){
			sum-=i%10;
			i/=10;
			if(i!=0){
				n/=10;
			}	
		}
		sum+=2*n;
	}
	printf("%d\n",sum);
}
int main(){
	int a = -999;
	int b = 999;
	plus(a);
	plus(b);
}
