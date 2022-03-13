#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
	FILE *pFile1,*pFile2,*pFile3;
	char alpha[10];
	int i;
	pFile1=fopen("password.txt","r");
	pFile2=fopen("alpha.txt","w");
	pFile3=fopen("digit.txt","w");
	if(pFile1==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		while(fgets(alpha,sizeof(pFile1),pFile1)!=NULL){
			for(i=0;i<sizeof(pFile1);i++)
			{
				if(isalpha(alpha[i])!=0){
					fputc(alpha[i],pFile2);
				}
				else if(isdigit(alpha[i])!=0){
					fputc(alpha[i],pFile3);
				}
			}
		}
	}
	fclose(pFile1);
	fclose(pFile2);
	fclose(pFile3);
	return 0;
}
