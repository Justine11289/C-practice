#include<stdio.h>
void print_space(int n){
	for(int s=0;s<n;s++){
		printf(" ");
	}	
}
int main() {
	char a[]="ABCabcABC";
	char b[]="abc";
	printf("%s\n",a);
	for(int i=0;i<=sizeof(a)-2;i++){
		if(a[i]==b[i%(sizeof(b)-1)]){
			print_space(i);
			printf("%s\n",b);
			printf("%d",i);
			break;
		}
	}
	return 0;
} 
