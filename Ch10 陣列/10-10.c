#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	const int dice[6]={1,2,3,4,5,6};
	int amount[11]={0,0,0,0,0,0,0,0,0,0,0};
	int random1,random2,i;
	
	srand(time(NULL)); /*��time()���ͬ�Ƨ@���üƺؤl*/
	
	for(i=1;i<=500;i++)
	{
		random1=rand()%6+1;
		random2=rand()%6+1;
		amount[random1-1+random2-1]++;
	 }
	 printf("�έp���l�C�@�Ʀr�X�{������:\n");
	 for(i=2;i<=12;i++) 
	 {
	 	printf("%d�X�{%d��\n",i,amount[i-2]);
	 }
	 return 0;
 } 
