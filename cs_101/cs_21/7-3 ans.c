#include<stdio.h>
int main(){
	char a[]="ABCabcABC";
	char b[]="bc";
	int alen=0,blen=0,index=0;
	while(a[alen]) alen++;
	while(b[blen]) blen++;
	for(int i=0;i<alen-blen;i++){
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
	printf("%d\n",index);
	return 0;
}

