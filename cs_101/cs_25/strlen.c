#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[50];
	int len;
	strcpy(str,"Hello IU!");
	len=strlen(str);
	printf("Length of |%s| is |%d|",str,len);
}
