#include<stdio.h>
int main(){
	char a[4][6]={{"10000"},{"10000"},{"10000"},{"10000"}};
	char b[4][6]={{"10000"},{"10000"},{"10000"},{"10000"}};
	int flag=0;
	int arow=sizeof(a)/sizeof(a[0]),brow=sizeof(b)/sizeof(b[0]);
	int acolumn=sizeof(a[0])/sizeof(a[0][0]),bcolumn=sizeof(b[0])/sizeof(b[0][0]);
	for(int i=0;i<arow;i++){
		for(int j=0;j<acolumn;j++){
			if(a[i][j]!=b[i][j]){
				flag=1;
			}
		}
	}
	flag?printf("False"):printf("True");
}
