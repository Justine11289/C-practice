#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[]="A,BETTER,TOMMORROW.";
	char space[2]=" ";
	int i,j=0;
	for(i=0;i<strlen(str);i++)
	{
		if(isupper(str[i])!=0){
			printf("%c",str[i]+32);
		}
		else if(ispunct(str[i])!=0){
			str[i]=space[0];
			printf("%c",str[i]);
		}
	}
	return 0;
}
