#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n=5;
	srand(n);
	for(i=0;i<n;i++){
		printf("%d\n",rand() % 50);
	}	
}
