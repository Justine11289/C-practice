# include<stdio.h>
void get_binary(int n) {
	char j,output;
	int size=sizeof(n)*2;
	for(int i=size-1;i>=0;i--){
		j=1<<i;
		output = n&j;
		output==0?printf("0"):printf("1");
		if(i%4==0){
			printf(" ");
		}
	}
}
int main() {
	int input;
	printf("請輸入一數:");
	scanf("%d",&input);
	get_binary(input);
	return 0;
}
