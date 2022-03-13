#include<stdio.h>
#include<stdlib.h>

struct phone
{
	char brand[8];
	char type[3];
	char year[5];
	char price[6];
}phone1,phone2;


int main()
{
	struct phone phone1={"Apple","XI","2019","40000"};
	struct phone phone2={"Samsung","SX","2019","38000"};
	
	printf("品牌:%s\n",phone1.brand);
	printf("型號:%s\n",phone1.type);
	printf("年份:%s\n",phone1.year);
	printf("售價:%s\n\n",phone1.price);
	
	printf("品牌:%s\n",phone2.brand);
	printf("型號:%s\n",phone2.type);
	printf("年份:%s\n",phone2.year);
	printf("售價:%s\n\n",phone2.price);
	return 0;
}
