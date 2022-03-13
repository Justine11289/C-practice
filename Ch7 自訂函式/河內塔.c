#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void hanoi(int,char,char,char);
void move(int,char,char);

int main()
{
	int n,result;
	printf("總共有多少圓盤要搬:");
	scanf("%d",&n);
	hanoi(n,'L','M','R');
	return 0;
}

void hanoi(int i,char left,char middle,char right)
{
	if(i>1){
		hanoi(i-1,left,right,middle);
		move(i,left,right);
		hanoi(i-1,middle,left,right);
	}
	else{
		printf("將第 %d 個盤子從 %c 塔移動到 %c 塔\n",i,left,right);
	}
	return;
}

void move(int i,char left,char right)
{
	printf("將第 %d 個盤子從 %c 塔移動到 %c 塔\n",i,left,right);
	return;
}
