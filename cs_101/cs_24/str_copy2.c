#include<stdio.h>
void str_copy(char a[],char b[],int len){
	printf("a at %x,b at %x\n",&a,&b);
	for(int i=0;i<len;i++){
		b[i]=a[i];
	}
	b[len]=0;
}


int main() {
	char a[]="abcde";
	int len=sizeof(a)/sizeof(char)-1;
	char b[len];
	str_copy(a,b,len);
	printf("a at %x,b at %x\n",&a,&b);
	printf("a=%s,b=%s",a,b);
}
