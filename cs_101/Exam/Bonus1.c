#include<stdio.h>
int main(){
	char a[]="B0829002";
	int sum=9,code;
	sum+=((a[1]-'0')*10+(a[2]-'0'))*1;
	sum+=((a[3]-'0')*10+(a[4]-'0'))%9;
	sum+=(a[5]-'0')*100;
	sum+=(a[6]-'0')*10;
	sum+=(a[7]-'0')*1;
	code=sum%9;
	printf("Your code is %d",code);
}
