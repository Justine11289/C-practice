#include<stdio.h>
int main(){
	char ID[]="A123456789",a[sizeof(ID)];
	char num[]={1,9,8,7,6,5,4,3,2,1};
	int sum=0;
	if(sizeof(ID)==11) {
		for(int i=2;i<=sizeof(ID)-2;i++){
			a[i]=ID[i-1]-48;
		}
		a[0]=(ID[0]-55)/10;
		a[1]=(ID[0]-55)%10;
		for(int j=0;j<sizeof(num);j++){
			sum=sum+a[j]*num[j];
		}
		(10-(sum%10))%10==ID[sizeof(ID)-2]-48?printf("True"):printf("False");
		return 0;
	} 
	else printf("False");
	return 0;
}

