#include<stdio.h>
int get_digit(int num){
	return num%10;
}
int main(){
	int num=1234,sum=0;
	do{
		sum=sum*10+get_digit(num);
		num/=10;
	}while(num!=0);
	printf("sum=%d\n",sum);
} 
