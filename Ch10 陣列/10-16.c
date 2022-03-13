#include<stdio.h>
#include<stdlib.h>

#define ROW 2
#define COL 7

int main(){
	int income[ROW][COL]={{1,4000,5500,7000,8000,9000,11000},{2,12000,15000,18000,22000,20000,23000}};
	int cost[ROW][COL]={{3000,3000,3000,3000,3000,3000},{10000,10000,10000,10000,10000,10000}};
	int net_income[ROW][COL];
	int i,j;
	for(i=0;i<ROW;i++)
	{
		int sum=0;
		printf("%d號台過去6個月的各月營業收入:\n",income[i][0]);
		for(j=1;j<COL;j++)
		{
			net_income[i][j]=income[i][j]-cost[i][j-1];
			printf("%d元 ",net_income[i][j]);
			sum=sum+net_income[i][j];
		}
		printf("\n%d號台過去6個月的總收入:%d\n\n",income[i][0],sum-5000);
	}
	return 0;
}
