#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k;
	int bigger,smaller;
	int max,mid,min;
	printf("�Ш̧ǿ�J�T���P����ư��Ƨ�,�H�Ů�j�}:");
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
	printf("�T�ƥѤj��p�Ƨ�:%d %d %d",max,mid,min);
	return 0;
}
