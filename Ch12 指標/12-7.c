#include<stdio.h>
#include<stdlib.h>

int main()
{
	char string[]="I love studying";
	char *ptr;
	ptr=string;
	do{
		printf("%c\n",*ptr);
		ptr++;
	}while(*ptr!='\0');
	return 0;
 } 
