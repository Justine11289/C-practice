#include<stdio.h>
#include<stdlib.h>

#define F(x,y) x*x+y*y

int main()
{
	int x,y;
	printf("�п�Jx��:");
	scanf("%d",&x);
	printf("�п�Jy��:");
	scanf("%d",&y);
	printf("%d^2+%d^2=%d",x,y,F(x,y));
	return 0;
 } 
