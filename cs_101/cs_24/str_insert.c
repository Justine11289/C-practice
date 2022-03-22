#include<stdio.h>
void str_insert(char a[],char b[],char c[],int index){
	int len=0;
	int alen=0;
	do{
		if(index==alen){
			for(int i=0;b[i];i++){
				c[len++]=b[i];
			}	
		}
		c[len++]=a[alen];
	}while(a[alen++]);
	c[len]=0;
}
int main() {
	char a[]="abcdef";
	char b[]="XXXX";
	int len=sizeof(a)/sizeof(char);
	len+=sizeof(b)/sizeof(char);
	char c[len];
	int index=0;
	str_insert(a,b,c,index);
	printf("a=%s,b=%s\n",a,b);
	printf("c=%s",c);
} 
