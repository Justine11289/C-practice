# include<stdio.h>
void Round_func(float n) {
	int in;
	in=n*10;
	in%10<=4?in=in:in+=10;
	printf("�|�ˤ��J�᪺��Ƭ�%d",in/10);
}
int main() {
	float input;
	printf("�п�J�@��:");
	scanf("%f",&input);
	Round_func(input);
	return 0;
}
