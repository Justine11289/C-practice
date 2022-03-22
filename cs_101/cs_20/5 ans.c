#include<stdio.h>
unsigned long get_reverse(unsigned long n){
	unsigned long sum=0;
	while(n!=0){
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}
double multiple_divide(unsigned long n,int c,int d){
	double f=n;
	for(int i=0;i<c;i++){
		f/=d;
	}
	return f;
}
void printf_revfloat(char s[],int size){
	for(int i=size-1;i>=0;i--){
		if(s[i]=='.'){
			continue;
		}
		if(i==size-1){
			printf("%c.",s[i]);
		}
		else printf("%c",s[i]);
	}
	printf("\n");
}
int main(){
	double f=1.12341234,reverse_f;
	unsigned long n,sum=0,count=0,i=0;
	printf("f=%0.8f\n",f);
	do{
		n=f;
		f-=n;
		f*=10;
		sum+=n;
		if(i=f==0) break;
		sum*=10;
		count++;
	}while(n>0);
	sum=get_reverse(sum);
	reverse_f=multiple_divide(sum,count,10);
	printf("f=%0.8f\n",reverse_f);
	return 0;
}
