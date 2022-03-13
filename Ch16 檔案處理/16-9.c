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
	pfin=fopen("output.txt","r");
	pfout=fopen("result.txt","w+");
	if(pfin==NULL || pfout==NULL){
		printf("ÀÉ®×¶}±Ò¥¢±Ñ");
		exit(1);
	}
	else{
		int sum;
		float average;
		while(feof(pfin)==0){
			fscanf(pfin,"%s %d %d %d",p.name,&p.calculus,&p.computer,&p.programming);
			sum=p.calculus+p.computer+p.programming;
			average=1.0*sum/3;
			fprintf(pfout,"%s %d %.1f\n",p.name,sum,average);
		}
	}
	fclose(pfin);
	fclose(pfout);
	return 0;
 } 
