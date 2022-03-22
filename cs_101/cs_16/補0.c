#include<stdio.h>
int main() {
	printf("%0*d\n",4,1); /*前者為共多少位數 後者為數值 其餘補0*/
	printf("%0*d\n",4,10);
	printf("%0*d\n",4,100);
	return 0;
} 
