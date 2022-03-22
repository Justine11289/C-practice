#include<stdio.h>
int main(){
	char a=5;
	printf("%d\n",a&1); /*0101&0001*/
	printf("%d\n",a&2); /*0101&0010*/
	printf("%d\n",a|3); /*0101|0011*/
	printf("%d\n",a^1); /*0000 0101^0000 0001 XOR(1¹J0->¯d)*/
	printf("%d\n",~a); /*~0000 0101=1111 1010 NOT(¥þ³¡Â½Âà)*/
	printf("%d\n",a>>1); /*0000 0101>>1=0000 0010*/
	printf("%d\n",a<<1); /*0000 0101<<1=0000 1010*/
	return 0;
} 
