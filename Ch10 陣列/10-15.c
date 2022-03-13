#include<stdio.h>
#include<stdlib.h>

#define ROW 4
#define COL 5

int main(){
	int quantity[ROW][COL]={{101,202,54,88,156},{102,251,68,125,135},{103,180,120,90,120},{104,312,72,74,180}};
	int price[1][4]={750,1500,1200,450};
	int i,j;
	for(i=0;i<ROW;i++)
	{
		int sum=0;
		for(j=1;j<COL;j++)
		{
			sum=sum+quantity[i][j]*price[0][j-1];	
		}
		printf("業務員編號%d之銷售總金額為%d元\n",quantity[i][0],sum);
	}
	return 0;
}
