#include<stdio.h>
#include<math.h>
int main(){
	int n=15,b;
	double a;
	if(n>0){
		a=log(n)/log(2);
		b=int(a);
		if(a-b==0){
			printf("%d is true",n);
		}
		else printf("%d is false",n);
    }
	else printf("��J�Ȥ��j��0");
	return 0;
}
