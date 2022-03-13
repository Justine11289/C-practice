#include<stdio.h>
#include<stdlib.h>

#define APPLE "Ä«ªG"
#define SAMSUNG "¤T¬P"

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
