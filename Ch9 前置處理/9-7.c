#include<stdio.h>
#include<stdlib.h>
#include "D:\\C語言\\Ch9 前置處理\\phone.h"

int main()
{
	#ifndef APPLE
	#define APPLE "蘋果"
	printf(APPLE);
	printf("\n");
	#else
	printf(APPLE);
	printf("\n");
	#endif
	
	#ifndef SAMSUNG
	#define SAMSUNG "三星"
	printf(SAMSUNG);
	#else
	printf(SAMSUNG);
	#endif
	
	return 0;
 } 
