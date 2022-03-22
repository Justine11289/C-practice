#include<stdio.h>
void print_space(int r,int i){
	if(r<=i){
		for(int space=r;space<i;space++){
			printf(" ");
		}
	}
	else{
		for(int space=1;space<i;space++){
			printf(" ");
		}
	}
}
void print_star(int r,int i){
	if(r<=i){
		for(int j=0;j<r;j++){
			printf("*");
		}
	}
	else{
		for(int j=r-i;j<=i;j++){
			printf("*");
		}
	}
}
int main(){
	int i=5;
	for(int r=1;r<=i*2;r++){
		print_space(r,i);
		print_star(r,i);
		printf("\n");
	}
} 
