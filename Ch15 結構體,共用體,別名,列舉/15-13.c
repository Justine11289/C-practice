#include<stdio.h>
#include<stdlib.h>

struct phone
{
	char kind[10];
	int fee;
	char flow[6];
	int time;
};

int main()
{
	int choice;
	struct phone case1={"攜碼加入",299,"5G",24};
	struct phone case2={"老客戶",289,"6G",12};
	struct phone case3={"老客戶",399,"無限",30};
	printf("1.攜碼加入月租299元 2.老客戶月租289元 3.老客戶月租399元\n");
	printf("請輸入想要的方案(1~3):");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("%s月租%d元,每月%s流量,綁約%d個月",case1.kind,case1.fee,case1.flow,case1.time);
	}
	else if(choice==2){
		printf("%s月租%d元,每月%s流量,綁約%d個月",case2.kind,case2.fee,case2.flow,case2.time);
	}
	else if(choice==3){
		printf("%s月租%d元,每月%s流量,綁約%d個月",case3.kind,case3.fee,case3.flow,case3.time);
	}
	else{
		printf("無此方案");
	}
	return 0;
 } 
