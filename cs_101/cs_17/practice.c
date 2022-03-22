#include<stdio.h>
int main() {
	char n=-99; /*1111 1010*/
	char mask=n>>(8-1);/*1111 1111(-) 0000 0000(+)*/
	printf("abs %d",(n^mask)-mask);
	/*1111 1010^1111 1111=0000 0101*/
	/*0000 0101-1111 1111=5-(-1)=6*/
	return 0;
} 
