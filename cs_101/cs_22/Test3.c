#include<stdio.h>
int main(){
	char a[]="7+7-2*5+1";
	unsigned long len=(unsigned long)sizeof(a)/sizeof(char)-1;
	int ans=a[len-1]-'0';
	for(int i=len-1;i>=0;i--){
		if(a[i]=='+'){
			ans=(a[i-1]-'0')+ans;
		}
		else if(a[i]=='-'){
			ans=(a[i-1]-'0')-ans;
		}
		else if(a[i]=='*'){
			ans=(a[i-1]-'0')*ans;
		}
		else if(a[i]=='/'){
			ans=(a[i-1]-'0')/ans;
		}
	}
	printf("a=%d",ans);	
	return 0;
	
}
