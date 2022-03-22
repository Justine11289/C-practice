#include<stdio.h>
int main(){
	char a[]="1&0|2&4";
	int num=0,index=0;
	unsigned long len=(unsigned long)sizeof(a)/sizeof(char)-1;
	for(int i=len;i>0;i--){
		if(a[i]=='&'){
			num=a[i-1]-'0';
		} 
		else if(a[i]=='|'){
			num=a[i+1]-'0';
		}
	}
	printf("%d",num);
}
