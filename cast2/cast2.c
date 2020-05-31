#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
	float aroot;

	printf("Type an integer: ");
	scanf("%d",&a);
	aroot = sqrt(abs(a));
	printf("The square root of %d is %.2f\n",a,aroot);

	return(0);
}

