#include<stdio.h>
int main() {
	char a[]="Hello";
	int n=0;
	for(int i=0;i<=sizeof(a)-2;i++){
		if (a[i]!='\0'){
			n++;
		}
		else break;
	}
	printf("%s len is %d",a,n);
	return 0;
} 
