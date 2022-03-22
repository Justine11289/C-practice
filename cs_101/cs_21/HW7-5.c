#include<stdio.h>
int main(){
	char a[]="AABBBACCCCdd";
	char b[sizeof(a)];
	int num[sizeof(a)]={0};
	num[sizeof(a)-1]='\0';
	for(int i=0;i<=sizeof(a)-2;i++){
		for(int j=i;j<=sizeof(a)-2;j++){
			if(a[j]==a[i]){
				b[i]=a[i];
				num[i]=num[i]+1;
				a[j]=a[i+1];
			}
		}
	}
	for(int i=0;;){
		if(num[i]=='\0'){
			break;
		}
		printf("%c%d",b[i],num[i]);
		i=i+num[i];
	}
	return 0;
} 

