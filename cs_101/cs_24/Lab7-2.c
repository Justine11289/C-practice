#include<stdio.h>
int main() {
	char a[]="123123456ABCABCABCABCDE*********";
	int count[256]={0},exist[256]={0};
	int len=sizeof(a)/sizeof(char)-1;
	for(int i=0;i<len;i++){
		count[a[i]]++; 
		exist[a[i]]=1; 
	}
	for(int i=0;i<256;i++){
		if(exist[i]){
			printf("%c:%d\n",i,count[i]);	
		}	
	}
	return 0;
}
