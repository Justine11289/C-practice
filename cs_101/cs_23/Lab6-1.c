#include<stdio.h>
int main(){
	char a[]="cgu1000cgu2000cc10x1b1n10";
	int sum=0,flag=0,total=0;
	for(int i=0;i<=sizeof(a);i++){
		if(a[i]>='0'&& a[i]<='9'){
			sum+=a[i]-'0';
			sum*=10;
			flag=1;
		}
		if(flag && (a[i]<'0'||a[i]>'9')){
			sum/=10;
			total+=sum;
			flag=0;
			sum=0;
		}
	}
	printf("sum=%d",total);
	return 0;
} 
