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
	printf("a=%c,b=%c",a,b); /*�]��swap��call by value,�ҥH�W�誺ab��U�誺ab���P*/
}
