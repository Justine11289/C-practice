#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 5

int main()
{
	int num[SIZE];
	int input[SIZE];
	int i,t=1;
	srand(time(NULL)); /*��time()���ͬ�Ƨ@���üƺؤl*/
	for(i=0;i<SIZE;i++)
	{
	do{
	   num[i]=rand()%14+1;
	}while(num[i]==7);
	printf("��%d�ӼƤ�7�j�Τp(1.�j 2.�p):",i+1);
	scanf("%d",&input[i]);
	if(num[i]<7 && input[i]==2){
		t++;
	}
	if(num[i]>7 && input[i]==1){
		t++;
	}
	else{
		printf("�q�����~,�L������");
		break;
	}
    }
    if(t==5){
		printf("�����ҥ��T,���߹L��!");
	}
	return 0;
}
