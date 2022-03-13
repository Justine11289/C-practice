#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
	FILE *pFile;
	char alpha[10];
	int i;
	pFile=fopen("password.txt","r");
	if(pFile==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		while(fgets(alpha,sizeof(pFile),pFile)!=NULL){
			for(i=0;i<sizeof(pFile);i++)
			{
				if(isalpha(alpha[i])!=0){
					printf("%c",alpha[i]);
				}
			}
		}
	}
	fclose(pFile);
	return 0;
}
