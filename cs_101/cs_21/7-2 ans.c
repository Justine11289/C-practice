#include<stdio.h>
int main(){
	char a[]="Hello World";
	int len=0;
	while(a[len]) len++;
	printf("len=%d",len);
	return 0;
}
