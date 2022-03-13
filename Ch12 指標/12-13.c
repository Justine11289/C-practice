#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char string[]="Happy New Year";
	char *ptr;
	int length;
	length=strlen(string);
	ptr=(char *)malloc(sizeof(char)*length);
	ptr=string;
	do{
		printf("%c",*ptr);
		ptr++;
	}while(*ptr!='\0');
	return 0;
}
