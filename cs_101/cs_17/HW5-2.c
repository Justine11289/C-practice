#include<stdio.h>

int main()
{
	int n=15;
	if(n>0){
		if(n%15==0){
		printf("Love IU");
		}
		else if(n%5==0){
		printf("IU");
		}
		else if(n%3==0){
		printf("Love");
		}
		else printf("%d",n);
	}
	else printf("��J���ƭȤ��j��0");
	return 0;
 } 
