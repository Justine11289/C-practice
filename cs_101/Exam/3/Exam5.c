#include<stdio.h>
int main(){
	char a[]="I am cCGUer";
	char b[]="Chang Gung University";
	char c[]="CGU";
	unsigned long alen=(unsigned long)sizeof(a)/sizeof(char)-1;
	unsigned long blen=(unsigned long)sizeof(b)/sizeof(char)-1;
	char output[alen+blen-2];
	int n=0;
	for(int i=0;i<=alen;i++){
		if(a[i]==c[0]&&a[i+1]==c[1]&&a[i+2]==c[2]){
			for(int j=0;j<blen;j++){
				output[n]=b[j];
				n++;	
			}
			i+=2;
		}
		else {
			output[n]=a[i];
			n++;	
		}
	}
	printf("%s",output);
}
