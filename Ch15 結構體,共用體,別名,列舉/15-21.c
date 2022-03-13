#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

enum Machine 
{
	lock_claw,
	open_claw,
	move_claw,
	down_claw,
	up_claw,
	put_claw
};

enum Machine state=lock_claw;
int sec=0;
char coin;

void LOCK()
{
	if(sec==1){
		printf("�Ч��(��Jy):");
		scanf("%c",&coin);
	}
}

void MOVE()
{
	if(sec==1){
		printf("���ʤ�\n");
	}	
}

void DOWN()
{
	if(sec==1){
		printf("���l�V�U\n");
	}	
}

void UP()
{
	if(sec==1){
		printf("���V�}�f��\n");
	}	
}

int main()
{	
	while(1)
	{
		switch(state)
		{
			case lock_claw: 
				LOCK();
				if(coin=='y'||coin=='Y'){
					state=open_claw;
				}
				break;
				
			case open_claw:
				printf("�P�}���l\n");
				state=move_claw;
				break;
				
			case move_claw: 
				MOVE();
				if(sec>=10){
					state=down_claw;
					sec=0;
				}
				break;
				
			case down_claw: 
				DOWN();
				if(sec>=2){
					state=up_claw;
					sec=0;
				}
				break;
				
			case up_claw: 
				UP();
				if(sec>=3){
					state=put_claw;
					sec=0;
				}
				break;
				
			case put_claw:
				printf("��U���~\n");
				state=lock_claw;
				sec=0;
				break;
		}
		Sleep(1000);
		sec++;
	}
	return 0;
}


