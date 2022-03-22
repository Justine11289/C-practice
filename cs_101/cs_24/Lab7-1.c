#include<stdio.h>
void str_delete(char a[],char b[],int alen,int blen){
	char c[alen];
	int i,j=0,k;
	for(i=0;i<=alen;i++){
		if(a[i]==b[0]){
			for(k=0;k<=blen;k++){
				if(a[i+k]!=b[k]){
					i+=blen;
					c[j++]=a[i];
				}
			}
		}
		else c[j++]=a[i];
	}	
	c[j]='\0';
	printf("c=%s",c);
}
int main() {
	char a[]="123ABCdABCdeAB";
	char b[]="ABC";
	int alen=sizeof(a)/sizeof(char)-1;
	int blen=sizeof(b)/sizeof(char)-1;
	printf("a=%s , b=%s\n",a,b);
	str_delete(a,b,alen,blen);
	return 0;
} 
