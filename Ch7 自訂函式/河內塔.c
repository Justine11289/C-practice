#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void hanoi(int,char,char,char);
void move(int,char,char);

int main()
{
	int n,result;
	printf("�`�@���h�ֶ�L�n�h:");
	scanf("%d",&n);
	hanoi(n,'L','M','R');
	return 0;
}

void hanoi(int i,char left,char middle,char right)
{
	if(i>1){
		hanoi(i-1,left,right,middle);
		move(i,left,right);
		hanoi(i-1,middle,left,right);
	}
	else{
		printf("�N�� %d �ӽL�l�q %c �𲾰ʨ� %c ��\n",i,left,right);
	}
	return;
}

void move(int i,char left,char right)
{
	printf("�N�� %d �ӽL�l�q %c �𲾰ʨ� %c ��\n",i,left,right);
	return;
}
