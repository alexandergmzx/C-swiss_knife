#include <stdio.h>

int main()
{
	int num;
	int *ptr;

	ptr = &num;
	*ptr = 25;
	
	printf("contains: %d\n", num);

	(*ptr)++;

	printf("contains: %d\n", num);

	return(0);
}