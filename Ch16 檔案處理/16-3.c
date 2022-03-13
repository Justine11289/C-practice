#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *pFile;
	char filename[15];
	pFile=fopen(filename,"r");
	if(pFile!=NULL){
		printf("開啟檔案成功\n");
		if(fclose(pFile)!=EOF){
			printf("關閉檔案成功\n");
		}
		else{
			printf("關閉檔案失敗\n");
		} 
	} 
	else{
		printf("開啟檔案失敗\n");
	}
	return 0;
 } 
