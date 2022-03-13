#include<stdio.h>
#include<stdlib.h>

struct score
{
	char name[10];
	int calculus;
	int computer;
	int programming;
}p;

int main()
{
	FILE *pFile;
	pFile=fopen("course.txt","r");
	if(pFile==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		while(feof(pFile)==0){
			fscanf(pFile,"%[^,],%d,%d,%d",p.name,&p.calculus,&p.computer,&p.programming);
			printf("%s,%d,%d,%d",p.name,p.calculus,p.computer,p.programming);
		}
	}
	fclose(pFile);
	return 0;
 } 
