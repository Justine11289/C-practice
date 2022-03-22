#include<stdio.h>
int is_lowercase(char a){
	if(a>='a'&&a<='z') return 1;
	else return 0;
}
int main(){
	char a[]="Hello World";	
	char tmp;
	int len=(int)sizeof(a)/sizeof(char)-1;
	char b[len+1];
	printf("a=%s\n",a);
	for(int i=0;i<len;i++){
		b[i]=is_lowercase(a[i]);  /*判斷大小寫 */
	}
	for(int i=0,j=len-1;i<j;i++,j--){
		if(b[i]^b[j]){  /*XOR:前後數值相同則假,前後數值不同則真*/
			a[i]^=' ';
			a[j]^=' ';
		}
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
	}
	printf("a=%s",a);
	return 0;
}
