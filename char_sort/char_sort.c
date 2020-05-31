#include <stdio.h>
#include <stdlib.h> //for qsort
#include <string.h> //for strlen

int compare(const void *a, const void *b);

int main()
{
	char rare[100];

/* populate the string */
	puts("Give me a rare input: ");
	fgets(rare,100,stdin);

/* Display the unsorted string */
//	printf("Unsorted string: \n%s", rare);

///* Sort the string 
	qsort(rare,strlen(rare),sizeof(char),compare);

// Display the sorted string 
	puts("\nBehold, Sorted string: ");
	puts(rare);
	
	putchar('\n');
//*/
	return(0);
}

int compare(const void *a, const void *b)
{
	return( *(char *)a - *(char *)b );
}

