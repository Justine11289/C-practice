#include<stdio.h>
int main(){
	char a[]="AABBBCCCCdd";
	int alen=0;
	while(a[alen]) alen++;
	for(int i=0;i<alen;i++){
		int count=1;
		while(i<alen-1 && a[i]==a[i+1]){
			count++;
			i++;
		}
		printf("%c%d",a[i],count);
	}
	return 0;
}
