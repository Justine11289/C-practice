#include<stdio.h>
void take_integer(char x[]){
	int ans=0,i=0,flag=0;
	while(x[i]){
		if(x[i]>='0' && x[i]<='9'){
			ans*=10;
			ans+=x[i]-'0';
			flag=1;
		}
		else{
			if(flag==1){
				break;
			}
		}
		i++;
	}
	printf("%s=%d\n",x,ans);
}
int main(){
	char a[]="123cgu";
	char b[]="cgu123";
	char c[]="cg123u";
	char d[]="cg123u543";
	take_integer(a);
	take_integer(b);
	take_integer(c);
	take_integer(d);
	return 0;
}
