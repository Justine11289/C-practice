#include<stdio.h>
double get_average(int arr[],int size){
	double sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	} 
	return sum/size;
} 
int main(){
	int balance[5]={100,2,3,17,50};
	double average;
	average=get_average(balance,5);
	printf("Average value is %f",average);
}
