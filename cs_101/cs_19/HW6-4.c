# include<stdio.h>
void Round_func(float n) {
	int in;
	in=n*10;
	in%10<=4?in=in:in+=10;
	printf("四捨五入後的整數為%d",in/10);
}
int main() {
	float input;
	printf("請輸入一數:");
	scanf("%f",&input);
	Round_func(input);
	return 0;
}
