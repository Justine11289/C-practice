#include<stdio.h>
int main(){
	unsigned long factorial=1;
	for(int i=1;i<=20;i++){
		factorial*=i;
		printf("%d!=%lu\n",i,factorial);
	}
}
