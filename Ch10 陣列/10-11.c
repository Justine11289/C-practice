#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 6

int main()
{
	int num[SIZE];
	int i,j;
	srand(time(NULL)); /*用time()產生秒數作為亂數種子*/
	for(i=0;i<SIZE;i++)
	{
		/*用do-while偵測後重複執行*/
		do{
			num[i]=rand()%49+1;
			for(j=0;j<i;j++)
			{
				if(num[i]==num[j]){
					break;
				}
			}
		}while(j!=i); /*j=i時數字才可相同,否則為重複數字*/
	printf("第%d個獎號:%d\n",i+1,num[i]);
	}
	return 0;
}
 
