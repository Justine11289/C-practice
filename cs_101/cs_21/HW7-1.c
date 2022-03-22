#include<stdio.h>
int main() {
	char a[]="Hello",b[sizeof(a)];
	printf("a=%s\n",a);
	for(int i=0;i<=sizeof(a)-2;i++){
		if (i==0){
			b[i]=a[sizeof(a)-2-i]-32;
		}
		else if(i==sizeof(a)-2){
			b[i]=a[sizeof(a)-2-i]+32;
		}
		else b[i]=a[sizeof(a)-2-i];
	}
	printf("a=%s\n",b);
	return 0;
} 
