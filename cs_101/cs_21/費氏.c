#include<stdio.h>
int main() {
	int Fi[15];
	Fi[0]=0;
	Fi[1]=1;
	for(int i=0;i<=15;i++){
		Fi[i]=Fi[i-1]+Fi[i-2];
		printf("Fi[%d]=%d\n",i,Fi[i]);
	}
	return 0;
}
