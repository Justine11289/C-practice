#include<stdio.h>
int get_first_char(char a[],int alen,char f){
	char b[256]={['A']=10,['B']=11,['C']=12,['D']=13,['E']=14,
				['F']=15,['G']=16,['H']=17,['I']=34,['J']=18,
				['K']=19,['L']=20,['M']=21,['N']=22,['O']=35,
				['P']=23,['Q']=24,['R']=25,['S']=26,['T']=27,
				['U']=28,['V']=29,['W']=32,['X']=30,['Y']=31,['Z']=33};
	return b[f]/10 +(b[f]%10)*9;
}
int main(){
	char a[]="A123456789";
	int alen=0,i=0,sum=0;
	alen=sizeof(a)-1;
	sum=get_first_char(a,alen,a[0]);
	for(int j=1,k=8;j<9;j++,k--){
		sum+=(a[j]-'0')*k;
	}
	a[9]-'0'==(10-sum%10)?printf("true"):printf("flase");
} 
