#include<stdio.h>
void delete_repeat(char a[],char b[],int n){
	int i,j;
	for(int i=0;a[i]!='\0';){
		if(a[i]==b[n]){
			if(a[i+1]=='\0'){
				a[i]='\0';
				break;
			}
			else{
				for(int j=i;a[j]!='\0';j++){
					a[j]=a[j+1];
				}
			}
		}
		else i++;
	}
}
int main(){
	char a[]="AABBBCCCCdd";
	unsigned long alen=(unsigned long)sizeof(a)/sizeof(char)-1;
	char b[alen];
	int n=0;
	for(int i=0;a[i]!='\0';){
		int count=1;
		for(int j=i+1;j<alen;j++){
			if(a[i]==a[j]){
				count++;
			}
			b[n]=a[i];
		}
		printf("%c%d",b[n],count);
		delete_repeat(a,b,n);
		n++;
	}
}
