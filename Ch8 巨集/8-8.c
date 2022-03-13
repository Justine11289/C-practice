#include<stdio.h>
#include<stdlib.h>

#define Area(length,width,height)  2*length*width+2*length*height+2*width*height


int main()
{
	int l,w,h;
	printf("請輸入長:");
	scanf("%d",&l);
	printf("請輸入寬:");
	scanf("%d",&w);
	printf("請輸入高:");
	scanf("%d",&h);
	printf("長方體表面積=%d",Area(l,w,h));
	return 0;
 }
