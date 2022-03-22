#include<stdio.h>
void print_spaces(int rows,int r){
	for(int space=0;space<rows-r;space++){
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
	for(int r=1;r<=rows;r++){
		print_spaces(rows,r);
		print_stars(r);
		printf("\n");
	}
	return 0;
}
