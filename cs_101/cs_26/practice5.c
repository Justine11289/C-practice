#include<stdio.h>
void print_star(int i,int N){
	if(i==1||i==N){
		for(int j=1;j<=N;j++){
			printf("*");
		}
	}
	else printf("*");
}
void print_space(int i,int N){
	if(i!=1&&i!=N){
		for(int j=1;j<=N-2;j++){
			printf(" ");
		}
		print_star(i,N);		
	}	
}
int main(){
	int N=3;
	for(int i=1;i<=N;i++){
		print_star(i,N);
		print_space(i,N);
		printf("\n");
	} 
} 
