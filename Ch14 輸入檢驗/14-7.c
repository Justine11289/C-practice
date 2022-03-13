#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[]="I $am 5a$ go68od#@$ st-ude[nt].";
	int i,j=0,length;
	length=strlen(str);
	char dstr[length];
	for(i=0;i<length;i++)
	{
		if(isspace(str[i])!=0 || isalpha(str[i])!=0){
			dstr[j++]=str[i];
		}
	}
	dstr[j]='\0';
	printf("%s",dstr);
	return 0;
}
