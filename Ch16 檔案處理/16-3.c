#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *pFile;
	char filename[15];
	pFile=fopen(filename,"r");
	if(pFile!=NULL){
		printf("�}���ɮצ��\\n");
		if(fclose(pFile)!=EOF){
			printf("�����ɮצ��\\n");
		}
		else{
			printf("�����ɮץ���\n");
		} 
	} 
	else{
		printf("�}���ɮץ���\n");
	}
	return 0;
 } 
