#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 6

int main()
{
	int num[SIZE];
	int i,j;
	srand(time(NULL)); /*��time()���ͬ�Ƨ@���üƺؤl*/
	for(i=0;i<SIZE;i++)
	{
		/*��do-while�����᭫�ư���*/
		do{
			num[i]=rand()%49+1;
			for(j=0;j<i;j++)
			{
				if(num[i]==num[j]){
					break;
				}
			}
		}while(j!=i); /*j=i�ɼƦr�~�i�ۦP,�_�h�����ƼƦr*/
	printf("��%d�Ӽ���:%d\n",i+1,num[i]);
	}
	return 0;
}
 
