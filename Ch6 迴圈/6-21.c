#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,unPrime;
	short int column;
	for(i=2;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				if(unPrime!=i){
					printf("%3d ",i);
					column++;
					if(column%10==0){
						printf("\n");
			    	}
				}
			    unPrime=i;
			}
		}
	}
	return 0;
}
