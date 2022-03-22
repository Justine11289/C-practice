#include<stdio.h>
int count_one(int n) {
	int output;
	while(n!=0){
		output++;
		n= n&(n-1);	
	}
	return output;
}
int main() {
	int input=5;
	printf("%d¦³%d­Ó1",input,count_one(input));
	return 0;
}
