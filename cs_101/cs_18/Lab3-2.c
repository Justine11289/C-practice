#include<stdio.h>
int main()
{
	for(int x=1,y=1;x<=9;y++){
		printf("%d*%d=%d\t",x,y,x*y);
		y<9? y=y:(y=0,x++,printf("\n"));
	}
	return 0;
}
