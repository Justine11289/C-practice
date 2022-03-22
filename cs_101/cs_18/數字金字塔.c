#include<stdio.h>
int main(){
	int n=7;
	int space=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=space+i;j++){
			j<=space?printf(" "):printf("%d ",i);
		}
		printf("\n");
		space--;
	}
} 
