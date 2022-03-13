#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[]="Taiwan,Touch,Your,Heart";
	int i,j=0,length;
	length=strlen(str);
	char dstr[length];
	for(i=0;i<length;i++)
	{
		if(ispunct(str[i])==0){
			dstr[j++]=str[i];
		}
	}
	dstr[j]='\0';
	printf("%s",dstr);
	return 0;
}
