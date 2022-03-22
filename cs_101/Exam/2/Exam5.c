#include<stdio.h>
int main(){
	char a[]="AABBBcCCaabbCC";
	char b[]="cc";
	char c[]="RRRRR";
	unsigned long alen=(unsigned long)sizeof(a)/sizeof(char)-1;
	unsigned long blen=(unsigned long)sizeof(b)/sizeof(char)-1;
	unsigned long clen=(unsigned long)sizeof(c)/sizeof(char)-1;
	char output[alen+clen];
	int n=0;
	for(int i=0;i<alen;i++){
		if(a[i]==b[0] || a[i]==b[0]+32 || a[i]==b[0]-32){
			for(int j=1;j<blen;j++){
				if(a[i+j]==b[j] || a[i+1]==b[j]+32 || a[i+j]==b[j]-32){
					for(int k=0;k<clen;k++){
						output[n]=c[k];
						n++;
					}
					i+=1;
				}
				else{
					output[n]=a[i];
					n++;
				}	
			}
		}
		else{
			output[n]=a[i];
			n++;
		}
	}
	output[n+1]='\0';
	printf("%s",output);
}
