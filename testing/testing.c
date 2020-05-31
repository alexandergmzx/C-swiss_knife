#include <stdio.h>
#include <stdint.h>

#define MASK(x) ((unsigned char)(1 << x))

int main(void)
{
	int *foo_ptr = NULL, *var_ptr = NULL, foo_intern;
	int foo_array [] = {0x01, 0x02, 0x03};
	
	foo_intern = 0x1000;
	foo_ptr = foo_array; // *foo_ptr = 0x01 
	var_ptr = &foo_array[2];// *var_ptr = 0x03
	*foo_ptr = foo_intern; //*foo_ptr = 0x1000
	*foo_ptr += 0x500; //*foo_ptr = 0x1500
	foo_ptr++;//foo_ptr = foo_array[1]
	*foo_ptr = foo_intern + 0x500;//*foo_ptr = 0x1500
	foo_ptr++;//foo_ptr = foo_array[2]
	(*foo_ptr)++; //*foo_ptr = 0x04
	/* here I will guess a typing error taking  ( (*foo_ptr)++; )     */
	printf("foo_ptr value is: %d\n", *foo_ptr); //
	printf("var_ptr value is: %d\n", *var_ptr); 
	return (0);

}
