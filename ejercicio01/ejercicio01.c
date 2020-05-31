#include <stdio.h>

int main()
{
	float v;

	printf("Enter a numerical value\n");
	scanf("%f",&v);

	printf("v equals %.2f\n",v);

/* Multiplication */
	v *= 5;
	printf("v * 5 equals %.2f\n",v);

/* Division */
	v /= 3;
	printf("v / 3 equals %.2f\n",v);

	return(0);
}