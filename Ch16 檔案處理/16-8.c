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
	FILE *pfin,*pfout;
	pfin=fopen("course.txt","r");
	pfout=fopen("output.txt","w+");
	if(pfin==NULL || pfout==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		while(feof(pfin)==0){
			fscanf(pfin,"%[^,],%d,%d,%d",p.name,&p.calculus,&p.computer,&p.programming);
			fprintf(pfout,"%s %d %d %d",p.name,p.calculus,p.computer,p.programming);
		}
	}
	fclose(pfin);
	fclose(pfout);
	return 0;
 } 
