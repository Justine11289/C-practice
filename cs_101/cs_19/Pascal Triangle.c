#include<stdio.h>
void print_space(int rows,int r){
	for(int space=1;space<=rows-r;space++){
		printf("  ");
	}
}
void print_pascal_number(int r){
	int coef=1;
	for(int i=0;i<=r;i++){
		i==0?coef=1:coef=coef*(r-i+1)/i;
		printf("%4d",coef);
	}
}
int main(){
	int rows=7;
	for(int r=0;r<rows;r++){
		print_space(rows,r);
		print_pascal_number(r);
		printf("\n");
	}
}
