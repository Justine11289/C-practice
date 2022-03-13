#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 5

int main()
{
	int num[SIZE];
	int input[SIZE];
	int i,t=1;
	srand(time(NULL)); /*用time()產生秒數作為亂數種子*/
	for(i=0;i<SIZE;i++)
	{
	do{
	   num[i]=rand()%14+1;
	}while(num[i]==7);
	printf("第%d個數比7大或小(1.大 2.小):",i+1);
	scanf("%d",&input[i]);
	if(num[i]<7 && input[i]==2){
		t++;
	}
	if(num[i]>7 && input[i]==1){
		t++;
	}
	else{
		printf("猜測錯誤,過關失敗");
		break;
	}
    }
    if(t==5){
		printf("五次皆正確,恭喜過關!");
	}
	return 0;
}
