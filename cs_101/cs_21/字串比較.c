#include<stdio.h>
int main(){
	char a[]="hello!";
	char b[]="hell0!";
	int flag=1;
	unsigned long len=(unsigned long)sizeof(a)/sizeof(char);
	for(int i=0,j=0;i<len;i++,j++){
		if(a[i]!=b[j]){
			flag=0;
			break;
		}
	}
	flag?printf("%s=%s",a,b):printf("%s!=%s",a,b);
}
