#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,n=5;
	srand((unsigned)time(NULL));
	for(i=0;i<n;i++){
		printf("%d\n",rand() % 50);
	}	
}
