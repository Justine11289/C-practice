#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	time_t curtime;
	time(&curtime);
	printf("Current time=%s",ctime(&curtime));
}
