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
	printf("�~������A:\n");
	while(state!=end_wash)
	{
	if(state==open_cover){
		printf("���}�~���\n");
		state=close_cover;	
	}
	
	else if(state==close_cover){
		printf("���W�~���\n");
		state=start_wash;
	}			
			
	else if(state==start_wash){
		printf("�ҰʲM�~\n");
		state=end_wash;
	}
	}
	printf("�M�~����");
	return 0;
 } 

