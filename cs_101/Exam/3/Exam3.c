#include<stdio.h>
int main(){
	float a[]={1.1,2.1,3.1,4.1,5.1};
	int sum=0,intfloat,len;
	len=sizeof(a)/sizeof(float);
	for(int i=0;i<len;i++){
		intfloat=(int)a[i];
		sum+=intfloat;
	}
	printf("%d",sum);
}
