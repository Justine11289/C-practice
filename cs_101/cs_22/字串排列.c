#include<stdio.h>
print_array(int num[],int len){
	for(int i=0;i<len;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
}
int main(){
	int len,temp;
	int num[]={1,2,3,4,5};
	len=sizeof(num)/sizeof(int);
	for(int i=1;i<=len;i++){
		for(int j=0;j<len-1;j++){
			temp=num[j];
			num[j]=num[j+1];
			num[j+1]=temp;
			print_array(num,len);
		}
	}
} 
