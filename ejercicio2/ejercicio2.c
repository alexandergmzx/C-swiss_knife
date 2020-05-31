//ejercicio2.c
#include <stdio.h>

int main()
{
	int entero;
	char *classification;

	printf("Enter your entero: ");
	scanf("%d",&entero);

	classification = ( ( entero < 0 ) ? "negativo" :
		( entero % 2 == 0 ? "par" :
		  "impar" ));
	printf("You are a %s.\n",classification);

	return(0);
}
