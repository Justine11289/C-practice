#include<stdio.h>
#include<stdlib.h>

struct phone
{
	char kind[10];
	int fee;
	char flow[6];
	int time;
};

int main()
{
	int choice;
	struct phone case1={"��X�[�J",299,"5G",24};
	struct phone case2={"�ѫȤ�",289,"6G",12};
	struct phone case3={"�ѫȤ�",399,"�L��",30};
	printf("1.��X�[�J�믲299�� 2.�ѫȤ�믲289�� 3.�ѫȤ�믲399��\n");
	printf("�п�J�Q�n�����(1~3):");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("%s�믲%d��,�C��%s�y�q,�j��%d�Ӥ�",case1.kind,case1.fee,case1.flow,case1.time);
	}
	else if(choice==2){
		printf("%s�믲%d��,�C��%s�y�q,�j��%d�Ӥ�",case2.kind,case2.fee,case2.flow,case2.time);
	}
	else if(choice==3){
		printf("%s�믲%d��,�C��%s�y�q,�j��%d�Ӥ�",case3.kind,case3.fee,case3.flow,case3.time);
	}
	else{
		printf("�L�����");
	}
	return 0;
 } 
