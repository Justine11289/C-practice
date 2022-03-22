#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h> 
#include<assert.h> 
int division(int a,int b){
	assert(b!=0);
	return a/b;
}
int main(){
	int a,b;
	printf("Enter two integer value:");
	scanf("%d %d",&a,&b);
	printf("a/b is %d",division(a,b));
	/*assert->True=¤£°µ False=¤¤¤î*/
}
