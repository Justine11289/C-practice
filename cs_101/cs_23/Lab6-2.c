#include<stdio.h>
void print_star(int row,int pyramid){
	for(int i=0;i<(pyramid-row+1)*2-1;i++){
		printf("*");
	} 
}

void print_space_a(int row,int pyramid){
	if(row>pyramid){
		for(int i=0;i<pyramid*2-1;i++){
			printf(" ");
		} 
	}
	else{
		for(int i=0;i<row-1;i++){
			printf(" ");
		} 
	}
}

void print_space_b(int row,int pyramid){
	if(row<=pyramid){
		for(int i=0;i<row-1;i++){
			printf(" ");
		} 
	}
}

void print_gap(int pyramid){
	for(int i=0;i<pyramid;i++){
		printf(" ");
	} 
}

int main() {
	int a[]={3,9,5,9,3,7,9};
	int max_rows=0;
	int len=(int)sizeof(a)/sizeof(int);
	for(int j=0;j<len;j++){
		a[j]>a[j+1]? (max_rows=a[j]) : (max_rows=a[j+1]);
	}
	for(int i=max_rows;i>0;i--){
		for(int j=0;j<len;j++){
			print_space_a(i,a[j]);
			print_star(i,a[j]);
			print_space_b(i,a[j]);
			print_gap(a[j]);
		}
		printf("\n"); 
	}
	return 0;
}
