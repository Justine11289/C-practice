#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k;
	int bigger,smaller;
	int max,mid,min;
	printf("請依序輸入三不同的整數做排序,以空格隔開:");
	scanf("%d %d %d",&i,&j,&k);
	if(i>j){
		bigger=i,smaller=j;
	}
	else{
		bigger=j,smaller=i;
	}
	if(bigger>k){
		max=bigger;
		if(k>smaller){
			mid=k,min=smaller;
		}
		else{
			mid=smaller,min=k;
		}
	}
	else{
		max=k,mid=bigger,min=smaller;
	}
	printf("三數由大到小排序:%d %d %d",max,mid,min);
	return 0;
}
