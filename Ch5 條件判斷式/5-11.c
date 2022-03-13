#include<stdio.h>
#include<stdlib.h>

int main()
{
	int option,money;
	printf("請選擇方案:1.單機35000元,月租399元 2.綁約2年,單機15000元,月租1599元: ");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
		money=35000+399*12*2;
		printf("需繳%d元",money);
		break;
	case 2:
		money=15000+1599*12*2;
		printf("需繳%d元",money);
		break;		
	default:
	    printf("方案選擇錯誤");
    }
	return 0;
 } 
