#include<stdio.h>
int main() {
	float f=1.234567;
	int sum=0,fi;
	fi=f*1000000;
	while(fi!=0){
		sum=sum*10+fi%10;
		fi /= 10;
	}
	printf("%f",(float)sum/1000000);
	return 0;
}
