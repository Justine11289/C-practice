#include<stdio.h>
#include<stdlib.h>

void Seven(int);

int main()
{
	Seven(100);
	return 0;
 }
 
void Seven(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%7==0){
			printf("%d ",i);
		}
	}
	return;
}  
