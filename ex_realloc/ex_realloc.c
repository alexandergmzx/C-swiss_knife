//To compile: gcc -Wall -o ex_realloc.out ex_realloc.c -Dlen=5
//To run: ./ex_malloc.out
#include <stdio.h>   //to print
#include <stdlib.h>  //malloc is part of stdlib
//This will be the lenght of the allocated array
#ifndef len
#define len 10
#endif 

int main(void)
{
    int *pa = malloc(len * sizeof *pa); // allocate an array of 10 int
    if(pa) {
        printf("%zu bytes allocated. Storing ints: ", len*sizeof(int));
        for(int n = 0; n < len; ++n)
            printf("%d ", pa[n] = n);
    }
 
    int *pb = realloc(pa, len*100000 * sizeof *pb); // reallocate array to a larger size
    if(pb) {
        printf("\n%zu bytes allocated, first %d ints are: ", len*100000*sizeof(int),len);
        for(int n = 0; n < len; ++n)
            printf("%d ", pb[n]); // show the array
        printf("\n");
        free(pb);
    } else { // if realloc failed, the original pointer needs to be freed
        free(pa);
    }
}