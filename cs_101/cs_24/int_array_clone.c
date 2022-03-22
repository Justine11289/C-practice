#include<stdio.h>
int main() {
	int a[]={10,20,30,40,50};
	int b[5];
	int len=sizeof(a)/sizeof(int);
	for(int i=0;i<len;i++){
		b[i]=a[i];
	}
	for(int i=0;i<len;i++){
		printf("a[%d]%d =b[%d] %d\n",i,a[i],i,b[i]);
	}
} 
