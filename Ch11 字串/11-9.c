#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i;
	char alphabet[27]="abcdefghijklmnopqrstuvwxyz";
	for(i=0;i<27;i++)
	{
		if(alphabet[i]>='a' && alphabet[i]<='z'){
			alphabet[i]=alphabet[i]-32;
		}
	}
	printf("%s",alphabet);
	return 0;
 }
