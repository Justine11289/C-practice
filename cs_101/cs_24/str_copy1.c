#include<stdio.h>
int main() {
	char a[]="abcde";
	int len=sizeof(a)/sizeof(char)-1;
	char b[len];
	for(int i=0;i<len;i++){
		b[i]=a[i];
	}
	b[len]=0;
	printf("a[] %s = b[] %s",a,b);
}
