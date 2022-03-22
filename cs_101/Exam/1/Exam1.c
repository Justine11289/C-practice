#include<stdio.h>
void print_spaces1(int n,int r){
	for(int space=r;space<n;space++){
		printf(" ");
	}	
} 
void print_stars1(int r){
	for(int j=0;j<r*2-1;j++){
		printf("*");
	} 
} 
void print_stars2(int n,int r){
	if(r==1||r==n+2){
		for(int j=1;j<=n*2-1;j++){
			printf("*");
		}
	}
	else printf("*");
}
void print_space2(int n,int r){
	if(r!=1&&r!=n+2){
		for(int j=1;j<=n*2-3;j++){
			printf(" ");
		}
		print_stars2(n,r);		
	}	
}
int main(){
	int n=4;
	for(int r=1;r<=n;r++){
		print_spaces1(n,r);
		print_stars1(r);
		printf("\n");
	}
	for(int r=1;r<=n+2;r++){
		print_stars2(n,r);
		print_space2(n,r);
		printf("\n");
	}
}
