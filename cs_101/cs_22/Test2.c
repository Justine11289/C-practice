#include<stdio.h>
void print_spaces(int a[]){
	for(int space=0;space<=a[sizeof(a)];space++){
		printf("  ");
	}	
} 

void print_stars(int a[]){
	for(int i=0;i<=a[sizeof(a)]*2-1;i++){
		printf("*");
	} 
} 
	
int main(){
	int a[]={3,5};
	for(int i=0;i<=sizeof(a);i++){
		print_spaces(a[i]);
		print_stars(a[i]);
		printf("\n");
	}
	return 0;
}

