#include<stdio.h>
#include<stdlib.h>

int F(int,int);

int main()
{
	int x,y;
	printf("�п�Jx��:");
	scanf("%d",&x);
	printf("�п�Jy��:");
	scanf("%d",&y);
	printf("F(x)=%d",F(x,y));
	return 0;
 }
 
int F(int n,int m)
{
	int f;
	f=n*n+m*m;
	return f;
}  
