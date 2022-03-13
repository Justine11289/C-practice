#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char Aarr[4][20]={"Whitney Houston","Michael Jackson","Celion Dion","Madonna"};
	char Barr[4][20]={};
	int i;
	for(i=0;i<4;i++)
	{
		strcpy(Barr[i],Aarr[i]);
		printf("%s\n",Barr[i]);
	}
	return 0; 
}
