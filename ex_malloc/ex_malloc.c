//To compile: gcc -Wall -o ex_malloc.out ex_malloc.c -Dlen=5
//To run: ./ex_malloc.out
#include <stdio.h>   //to print
#include <stdlib.h>  //malloc is part of stdlib
//This will be the lenght of the allocated array
#ifndef len
#define len 10
#endif
 
int main(void){
    //int *p1 = malloc(sizeof(int) * len);  // allocates enough for an array of int of a len size
    //int *p1 = malloc(sizeof(int[ len]));  // same, naming the type directly
    //int *p1 = malloc(sizeof(*p1) * len);  //same, without repeating the type name
    int* p1 = (int *)malloc(sizeof(*p1) * len);//coursera way
 
    if(p1) { //check if the malloc was successful
        for(int n=0; n<len; ++n)            // populate the array
            p1[n] = n*n;

        for(int n=0; n<len; ++n)            // print it back out
            printf("p1[%d] = %d\n", n, p1[n]);
    }else{
        printf("The allocation was unsuccessful");
        exit(0);
    }
    free(p1);//important to free the used size
    return 0;
}