#include<stdio.h>
int main(){
	char a[]="a1b2c3A4B5C";
	int len=(unsigned)sizeof(a)/(unsigned)sizeof(char);
	for(int i=0;i<len-1;i++){
		if(a[i] >= 'A'&&a[i] <= 'Z'){
			a[i]+=('a'-'A');
		}
		else if(a[i] >= 'a'&&a[i] <= 'z'){
			a[i]-=('a'-'A');
		}
	}
	for(int i=0;i<len-1;i++){
		if(a[i] >= '1'&& a[i] <= '9'){
			if(a[i]=='1'){
				printf("I");
			}
			else if(a[i]=='2'){
				printf("II");
			}
			else if(a[i]=='3'){
				printf("III");
			}
			else if(a[i]=='4'){
				printf("IV");
			}
			else if(a[i]=='5'){
				printf("V");
			}
			else if(a[i]=='6'){
				printf("VI");
			}
			else if(a[i]=='7'){
				printf("VII");
			}
			else if(a[i]=='8'){
				printf("VIII");
			}
			else if(a[i]=='9'){
				printf("IX");
			}
		}
		else printf("%c",a[i]);
	}
}
