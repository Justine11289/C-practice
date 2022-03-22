#include<stdio.h>
int main(){
	char a[]="hello!";
	char b[]="hellooooo!";
	unsigned long alen=(unsigned long)sizeof(a)/sizeof(char);
	unsigned long blen=(unsigned long)sizeof(b)/sizeof(char);
	char c[alen+blen];
	printf("alen=%lu blen=%lu clen=%lu\n",alen,blen,alen+blen-1);
	for(int i=0,j=0;i<alen+blen-1;i++){
		i<alen-1?c[i]=a[i]:c[i]=b[j++];
	}
	printf("%s + %s = %s ",a,b,c);
}
