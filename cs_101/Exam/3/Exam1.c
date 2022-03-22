#include<stdio.h>
void print_spaces1(int i,int r){
	for(int space=r;space<i;space++){
		printf(" ");
	}	
} 
void print_stars1(int r){
	for(int j=0;j<r*2-1;j++){
		printf("*");
	} 
} 
void print_spaces2(int i,int r){
	for(int space=r;space<i-1;space++){
		printf(" ");
	}	
} 
void print_stars2(int r){
	for(int j=0;j<r*2+1;j++){
		printf("*");
	} 
} 
int main(){
	int i=4;
	for(int r=i;r>=1;r--){
		print_spaces1(i,r);
		print_stars1(r);
		printf("\n");
	}
	for(int r=1;r<i;r++){
		print_spaces2(i,r);
		print_stars2(r);
		printf("\n");
	}
}
