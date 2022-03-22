#include<stdio.h>
#include<math.h>
int main(){
	double x,PI;
	int iPI,t;
	for(double i=0;i<10000000;i++){
		t=2*i+1;
		x=x+(pow(-1,i)/t);
		iPI=4*x*100000;
		if(iPI==314159){
			PI=round(iPI)/100000;
			printf("X=%d PI=%.5lf",t,PI);
			break;
		}
	}
	return 0;
} 
