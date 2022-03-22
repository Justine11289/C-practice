#include<stdio.h>
int round_func(float f){
	return f+=0.5;
}
int main(){
	printf("round_func=%d\n",round_func(1.4));
	printf("round_func=%d\n",round_func(2.6));
	return 0;
} 
