#include <stdio.h>

#define multiply(x) ((x) * 18)

int main(void){
	
	unsigned int hexa = 0x400UL;

	printf("\nprinting original: %x\n",hexa);

	printf("printing multiplied: %x\n",multiply(hexa));

	printf("and %lx \n",(0x400UL * 18));

	return 0;
}
