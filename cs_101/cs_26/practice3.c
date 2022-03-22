#include<stdio.h>
int main(){
	int i=1985,j;
	int s[4];
	for(j=3;j>=0;j--){
		s[j]=i%10;
		i/=10;
	}
	printf("s=");
	for(j=0;j<4;j++){
		if(s[j]==1){
			printf("I ");
		}
		else if(s[j]==2){
			printf("II ");
		}
		else if(s[j]==3){
			printf("III ");
		}
		else if(s[j]==4){
			printf("IV ");
		}
		else if(s[j]==5){
			printf("V ");
		}
		else if(s[j]==6){
			printf("VI ");
		}
		else if(s[j]==7){
			printf("VII ");
		}
		else if(s[j]==8){
			printf("VIII ");
		}
		else if(s[j]==9){
			printf("IX ");
		}
	}
}
