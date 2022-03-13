# include<stdio.h>
# include<stdlib.h>
# include<math.h>

int main()
{
	const int cappuccino=50;
	int cup_cappu=5;
	int total_price=0;
	printf("卡布奇諾咖啡原價一杯 %d 元\n",cappuccino);
	
	total_price=cappuccino*cup_cappu;
	printf("帳單:卡布奇諾 %d 杯 %d 元\n",cup_cappu,total_price);
	return 0;
}
