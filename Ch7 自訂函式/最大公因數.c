#include<stdio.h>
#include<stdlib.h>

int GCD(int x,int y)
{
	int result;
	if(x%y==0){
		return y;
	} 
	else{
		result=GCD(y,x%y);
		return result; 
	}
	
}

int main()
{
	int x,y,result;
	printf("�p���ƪ��̤j���]��,�п�J�⥿���:");
	scanf("%d %d",&x,&y);
	result=GCD(x,y);
	printf("%d�P%d���̤j���]�Ƭ�%d",x,y,result);
	return 0;
}
