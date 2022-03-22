#include<stdio.h>
int main(){
	char a[]="-1 + 1 -1 -2";
	unsigned long len=(unsigned long)sizeof(a)/sizeof(char)-1;
	int sum=0;
	for(int i=0;i<len-1;i++){
		if(a[i]=='-'){
			sum=(a[i+1]-'0')*2+sum;
			i++;
		}
		else if(a[i]=='+'){
			sum=(a[i+2]-'0')+sum;
			i++;
		}
	}
	printf("%d",sum);	
}
