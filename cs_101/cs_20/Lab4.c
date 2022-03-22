# include<stdio.h>
# define ROWS 7
void print_spaces(int r,int i){
	if(r<ROWS){
		for(int space=r;space<ROWS;space++){
			printf(" ");
		}
	}
	for(int space=i;space<r;space++){
		printf(" ");
	}
} 
void print_stars(int i) {
	for(int star=0;star<i*2+1;star++){
		printf("*");
	}
	printf("\n");
} 
void print_top(int r){
	for(int i=0;i<r;i++){
		print_spaces(r,i);
		print_stars(i);
	}	
} 
void print_truck(int n){
	for(int truck=0;truck<n;truck++){
		print_spaces(0,n);
		print_stars(0);
	}
}
int main() {
	printf("   X'mas tree!\n");
	for(int r=3;r<=ROWS;r+=2){
		print_top(r); 
	}
	print_truck(5);
	return 0;
}
