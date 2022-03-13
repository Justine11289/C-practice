#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char strA[11]="television";
	char strB[8]="portion";
	char strC1[5]="";
	char strC2[5]="";
	strncpy(strC1,strA,4);
	strncpy(strC2,strB,4);
	strcat(strC1,strC2);
	printf("%s",strC1);
	return 0;
 }  
