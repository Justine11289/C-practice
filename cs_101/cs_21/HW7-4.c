#include<stdio.h>
int main() {
	char a[]="ABCabcABC";
	char b[sizeof(a)];
	b[sizeof(a)-1]='\0';
	int shift=4;
	for(int i=0;i<=sizeof(a)-2;i++){
		i<=(sizeof(a)-2-shift)?b[i]=a[i+shift]:b[i]=a[i+shift-(sizeof(a)-1)];
	}
	printf("%s",b);
	return 0;
} 

