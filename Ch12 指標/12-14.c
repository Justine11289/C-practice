#include<stdio.h>
#include<stdlib.h>

int main()
{
	void *ptr;
	int iord,n;
	double sum;
	double addnumber(void*,int,int);
	
	printf("請問要計算1.整數 或 2.浮點數:");
	scanf("%d",&iord);
	printf("請問要計算多少個數字的總和:");
	scanf("%d",&n);

	if(iord==1){
		ptr=malloc(sizeof(int)*n);
	}
	else{
		ptr=malloc(sizeof(int)*n);
	}
	
	sum=addnumber(ptr,iord,n);
	if(iord==1){
		printf("總和=%d",(int)sum);
	}
	else{
		printf("總和=%.2lf",sum);
	}
	
	free(ptr);
	return 0;
}

double addnumber(void *p,int iord,int num)
{
	int *pp1;
	double *pp2;
	int sum_int=0,i;
	double sum_double=0;
	
	if(iord==1){
		pp1=(int*)p;
		for(i=0;i<num;i++)
		{
			printf("請輸入第%d個整數:",i+1);
			scanf("%d",pp1+i);
			sum_int=sum_int+(*pp1+i);
		}
		return sum_int;
	}
	else{
		pp2=(double*)p;
		for(i=0;i<num;i++)
		{
			printf("請輸入第%d個整數:",i+1);
			scanf("%lf",pp2+i);
			sum_double=sum_double+(*pp2+i);
		}
		return sum_double;
	}	
}
