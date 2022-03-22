#include<stdio.h>
void print_spaces(int rows,int r){
	for(int space=r;space<rows;space++){
		printf("  ");
	}	
} 

void print_stars(int r){
	for(int i=0;i<r*2-1;i++){
		printf("* ");
	} 
} 

int main(){
	int rows=5;
	for(int r=rows;r>=1;r--){
		print_spaces(rows,r);
		print_stars(r);
		printf("\n");
	}
	return 0;
}
