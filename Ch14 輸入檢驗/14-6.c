#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char credit[20]="4444-5555-6666-7777";
	char credit_move[20]; /*一組原字串,一組放新字串*/ 
	int i,j=0;
	for(i=0;i<strlen(credit);i++)
	{
		if(ispunct(credit[i])==0){
			credit_move[j++]=credit[i];
		}
	}
	credit_move[j]='\0';
	printf("%s",credit_move);
	return 0;
}
