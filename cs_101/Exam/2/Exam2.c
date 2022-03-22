#include<stdio.h>
int main(){
	char a[]="ABCabcABC";
	char b[]="bc";
	unsigned long alen=(unsigned long)sizeof(a)/sizeof(char)-1;
	unsigned long blen=(unsigned long)sizeof(b)/sizeof(char)-1;
	int index;
	for(int i=0;i<alen;i++){
		index=i;
		for(int j=0;j<blen;j++){
			if(a[index]==b[j]){
				if(j==blen-1){
					index-=j;
					i=alen;
					break;
				}
				index++;
			}
			else break;
		}
	} 
	printf("%s\n",a);
	printf("%*s%s\n",index," ",b);
	printf("%d",index);
}
