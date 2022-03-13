#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
  
int main()
{
	int i,t=1;
	char* password="ju1289";
	printf("½Ð¿é¤J±K½X:\n");
	getche();
	for(i=1;i<6;i++)
	{
		if(getche()==password[i]){
			t++;
			if(t==6){
			printf("\n±K½X¥¿½T");	
			}
		}
		else {
		printf("\n¿é¤J¿ù»~"); 
		break;
		}
	}
	return 0;
}
