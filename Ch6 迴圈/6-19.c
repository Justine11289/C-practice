#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1,j=1;
	while(i<10)
	{
		j=1;
		printf("��%d���~�j��\n",i);
		while(j<10)
		{
			printf("%d*%d=%2d\t",i,j,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
