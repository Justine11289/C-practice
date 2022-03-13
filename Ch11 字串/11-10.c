#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i;
	unsigned int length;
	char str[]="Wish you happy";
	length=strlen(str);
	for(i=length;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
 }
