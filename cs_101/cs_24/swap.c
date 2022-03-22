#include<stdio.h>
void swap(char a,char b){
	char tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("a at %x,b at %x\n",&a,&b);
}
int main() {
	char a='a';
	char b='b';
	swap(a,b);
	printf("a at %x,b at %x\n",&a,&b);
	printf("a=%c,b=%c",a,b); /*因為swap為call by value,所以上方的ab跟下方的ab不同*/
}
