#include<stdio.h>
#include<stdlib.h>
#include "D:\\C�y��\\Ch9 �e�m�B�z\\phone.h"

int main()
{
	#ifndef APPLE
	#define APPLE "ī�G"
	printf(APPLE);
	printf("\n");
	#else
	printf(APPLE);
	printf("\n");
	#endif
	
	#ifndef SAMSUNG
	#define SAMSUNG "�T�P"
	printf(SAMSUNG);
	#else
	printf(SAMSUNG);
	#endif
	
	return 0;
 } 
