#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char Aarr[4][20]={"Whitney Houston","Michael Jackson","Celion Dion","Madonna"};
	char Barr[4][20]={};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<20;j++)
		{
			if(Aarr[i][j]=='\0'){
				break;
			}
			else{
				Barr[i][j]=Aarr[i][j];
			}
		}
		printf("%s\n",Barr[i]);
	}
	
	return 0; 
}
