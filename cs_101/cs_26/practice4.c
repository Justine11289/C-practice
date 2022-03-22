#include<stdio.h>
int main(){
	int i=3,tmp;
	int a[]={1,2,3,4,5,6,7,8,9999};
	int len=(unsigned)sizeof(a)/(unsigned)sizeof(int);
	for(int j=0;j<len;j++){
		for(int k=j;k<len;k++){
			if(a[j]<a[k]){
				tmp=a[j];
				a[j]=a[k];
				a[k]=tmp;
			}
		} 
	}
	printf("%d",a[i-1]);
}
