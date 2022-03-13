#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char strA[]="人工智慧的英文是Artificial Intelligence";
	char strB[31]="";
	strcpy(strB,strA);
	printf("%s",strB);
	return 0;
 } 
