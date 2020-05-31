#include <stdio.h>
#include <stdint.h>

#define MASK(x) ((unsigned char)(1 << x))

int main(void)
{
	uint8_t mask = 0b00010100;

	uint8_t x = 0xAA;

	printf("Original x:\t %x\n", x);
	//set bits
	x = x | mask;
	printf("Set x:    \t %x\n", x);
	//clear bits
	x = x &~(mask);	
	printf("Cleared x:\t %x\n", x);

	//read bits
	(x & mask) ? puts("bits are on (1)") : puts("bits are off (0)");

	//toggle bits //invert bits
	x = x ^ mask;	
	printf("Toggled x:\t %x\n", x);

	return (0);
}