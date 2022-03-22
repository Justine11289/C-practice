#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[20]="HELLO IU!";
	char str2[10]="XX";
	char str3[10]="IU";
	if(strstr(str1,str2)){
		printf("The substring is:%s",(str1,str2));
	}
	if(strstr(str1,str3)){
		printf("The substring is:%s",(str1,str3));
	}
	/*strstr(¥D¦r¦ê,·j¯Á¦r¦ê)*/
}
