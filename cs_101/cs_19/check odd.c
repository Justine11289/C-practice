#include<stdio.h>
int check_odd(int n){
	return n&0x1;
}
int main(){
	printf("%d",check_odd(3));
}
