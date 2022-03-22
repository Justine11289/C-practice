#include<stdio.h>
int main(){
	char a[]="CBA";
	int len=sizeof(a)-1;
	char tmp;
	printf("%s->",a);
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(a[i]<a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("%s",a);
}
