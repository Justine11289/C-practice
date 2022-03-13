#include<stdio.h>
#include<stdlib.h>


enum Washing
{
	open_cover,
	close_cover,
	start_wash,
	end_wash,
};

enum Washing state=open_cover;

int main()
{
	printf("洗衣機狀態:\n");
	while(state!=end_wash)
	{
	if(state==open_cover){
		printf("打開洗衣機\n");
		state=close_cover;	
	}
	
	else if(state==close_cover){
		printf("關上洗衣機\n");
		state=start_wash;
	}			
			
	else if(state==start_wash){
		printf("啟動清洗\n");
		state=end_wash;
	}
	}
	printf("清洗完畢");
	return 0;
 } 

