#include<stdio.h>
#include<stdlib.h>

#define Area(length,width,height)  2*length*width+2*length*height+2*width*height


int main()
{
	int l,w,h;
	printf("�п�J��:");
	scanf("%d",&l);
	printf("�п�J�e:");
	scanf("%d",&w);
	printf("�п�J��:");
	scanf("%d",&h);
	printf("��������n=%d",Area(l,w,h));
	return 0;
 }
