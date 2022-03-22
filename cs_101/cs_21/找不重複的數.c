#include<stdio.h>
int main(){
	char a[]="44566";
	int len=5,i,j;
	for(i=0;i<len;i++){
		printf("%c",a[i]);
		for(j=0;j<len;j++){
			printf("->a[%d]=%c",j,a[j]);
			if(i!=j && a[i]==a[j]){
				break;
			}
		}
		if(j==len){
			printf("\n");
			break;
		}
		printf("\n");
	}
	printf("Unique element=%c",a[i]);
}
