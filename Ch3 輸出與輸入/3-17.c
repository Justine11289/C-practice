#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char c;
	printf("請輸入一字元:");
	c=getche();
	printf("\n\n"); 
	printf("    %c\n\n",c);
	printf("  %c %c %c\n\n",c,c,c);
	printf("%c %c %c %c %c\n\n",c,c,c,c,c);
	printf("  %c %c %c\n\n",c,c,c);
	printf("    %c",c);
	return 0;
}
