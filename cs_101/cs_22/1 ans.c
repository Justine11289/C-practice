#include<stdio.h>
void take_integer(char x[]){
	int len=0,sum=0,flag=0;
	len=sizeof(x)-2;
	for(int i=0;i<len;i++){
		if(x[i]>='0' && x[i]<='9'){
			sum+=x[i]-'0';
			sum*=10;
			flag=1;
		}
		if(flag &&(x[i]<'0' || x[i]>'9')){
			sum/=10;
			flag=0;
			break;
		}
		else if(flag &&(x[i+1]=='\0')){
			sum/=10;
			flag=0;
			break;
		}
	}
	printf("%s=%d\n",x,sum);
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
