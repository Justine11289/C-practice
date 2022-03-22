#include<stdio.h>
void print_spaces(int i,int n){
	for(int j=i;j<n;j++){
		printf("  ");
	}	
} 

void print_stars(int i){
	for(int j=0;j<i*2-1;j++){
		printf("* ");
	} 
} 

int main(){
	int n=10;
	for(int i=0;i<=n;i++){
		print_spaces(i,n);
		print_stars(i);
		printf("\n");
	}
	return 0;
}
