#include<stdio.h>
int main(){
	char a[]="dnio2bbqlkwdblwbnkcklasncwhrouwqbnflewKFEWJFIQOFBKABLKNABOUDBQKJ";
	int count[26]={0};
	int len=sizeof(a)/sizeof(char)-1;
	for(int i=0;i<len;i++){
		if('A'<=a[i]&&a[i]<='Z'){
			count[a[i]-'A']++; 
		}
		else if('a'<=a[i]&&a[i]<='z'){
			count[a[i]-'a']++; 
		}
	}
	for(int i=0;i<26;i++){
		printf("|%c%c|",'A'+i,'A'+i+32);
		for(int j=0;j<count[i];j++){
			printf("*");
		}
		printf("\n");	
	}
	return 0;		
}
