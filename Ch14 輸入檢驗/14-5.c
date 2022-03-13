#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[]="Sd1U89b4X190F4u";
	int count_alpha=0,count_number=0,i;
	for(i=0;i<strlen(str);i++)
	{
		if(isalpha(str[i])!=0){
			count_alpha++;
		}
		else if(isdigit(str[i])!=0){
			count_number++;
		}
	}
	printf("英文字母數量:%d\n",count_alpha);
	printf("數字數量:%d",count_number);
	return 0;
}
