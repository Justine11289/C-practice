#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define x 1.0*(c*e-f*b)/(a*e-d*b)
#define y 1.0*(a*f-d*c)/(a*e-d*b)

int main()
{
	int a,b,c,d,e,f;
	printf("ax+by=c dx+ey=f\n");
	printf("�п�Ja b c��");
	scanf("%d %d %d",&a,&b,&c);
	printf("�п�Jd e f��");
	scanf("%d %d %d",&d,&e,&f);
	printf("���p�߫�i�ox=%lf y=%lf",x,y);
	return 0;
 }
