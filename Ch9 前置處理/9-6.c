#include<stdio.h>
#include<stdlib.h>

#define APPLE "ī�G"
#define SAMSUNG "�T�P"

int main()
{
	#ifdef APPLE
	printf(APPLE);
	printf("\n");
	#endif
	
	#ifdef SAMSUNG
	printf(SAMSUNG);
	#endif
	
	return 0;
 } 
