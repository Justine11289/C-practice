#include<stdio.h>
int main() {
	char a='a';
	char b='b';
	a^=b;
	b^=a;
	a^=b;
	printf("a=%c b=%c",a,b);
	return 0;
} 
