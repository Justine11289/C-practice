#include<stdio.h>
int main(){
	double PI=4.0;
	long iPI=0;
	int flag=1,x=0;
	for(int i=3;i<1000000;i+=2){
		if(flag==0){
			PI+=(4.0/i);
			flag++;
		}
		else{
			PI-=(4.0/i);
			flag--;
		}
		iPI=PI*100000;
		if(iPI==314159){
			x=i;
			break;
		}
	}
	printf("%d %.5f",x,PI);
	return 0;
} 
