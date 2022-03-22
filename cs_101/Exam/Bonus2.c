#include<stdio.h>
int main(){
	char a[]="10001111";
	char b[]="10011110";
	int sum1=0,sum2=0;
	for(int i=0;i<8;i++){
		sum1+=(a[i]-'0')<<(7-i);
		sum2+=(b[i]-'0')<<(7-i);
	}
	int num1=sum1/(1<<4),alpha1=sum1%(1<<4); 
	if(alpha1>=10){
		printf("%d%c\n",num1,alpha1-10+'A');
	}
	else printf("%d%d\n",num1,alpha1);
	int num2=sum2/(1<<4),alpha2=sum2%(1<<4); 
	if(alpha2>=10){
		printf("%d%c",num2,alpha2-10+'A');
	}
	else printf("%d%d",num2,alpha2);

}
