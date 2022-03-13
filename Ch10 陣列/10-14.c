#include<stdio.h>
#include<stdlib.h>

#define ROW 2
#define COL 4

int main(){
	int A[ROW][COL]={{12,24,36,48},{22,44,33,11}};
	int B[ROW][COL]={{60,49,38,27},{74,54,34,14}};
	int C[ROW][COL];
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			C[i][j]=2*A[i][j]-B[i][j];
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
