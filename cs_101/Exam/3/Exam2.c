#include<stdio.h>
int main(){
	char a[]="ABCabcABC";
	int shift=4;
	int len=sizeof(a)/sizeof(char)-1;
	shift%=len;
	printf("%s\n%d\n",a,shift);
	for(int i=0;i<shift;i++){
		char tmp=a[0];
		for(int j=0;j<len-1;j++){
			a[j]=a[j+1];
		}
		a[len-1]=tmp;
	}
	printf("%s",a);
} 
