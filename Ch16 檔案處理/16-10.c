#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *pFile;
	pFile=fopen("somebody.txt","r");
	if(pFile==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		fseek(pFile,2,SEEK_SET);
		printf("%c",fgetc(pFile));
		fseek(pFile,3,SEEK_CUR);
		printf("%c",fgetc(pFile));
		fseek(pFile,-4,SEEK_END);
		printf("%c",fgetc(pFile));
	}
	fclose(pFile);
	return 0;
 } 
