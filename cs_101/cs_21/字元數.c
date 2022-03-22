#include<stdio.h>
void printf_str(char str[]){
	printf("%s\n",str);
}
void printf_int(int array[],int size){
	for(int i=0;i<size;i++){
		printf("%d",array[i]);
	}
	printf("\n");
} 
int main(){
	char hello[]="hello";
	int array[]={1,2,3,4,5,6};
	printf_str(hello);
	printf_int(array,6);
}
