//2 3 5 7 11
#include <stdio.h>

void *primes(void)
{
	static int p[5] = {2, 3, 5, 7, 11}

	return (p);
}

int main()
{
	int *array;

	array = primes();
	
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",array[i] );
	}

	return(0);
}

