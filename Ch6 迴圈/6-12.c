#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for(i=1;i<=127;i++)
	{
		if(i>=65 && i<=90){
		  printf("%c ",i);
		}
		else if(i>=97 && i<=122){
		  printf("%c ",i);
		}	
	}
	return 0;
}
