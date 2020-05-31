//To compile: gcc -Wall -o ex_calloc.out ex_calloc.c -Dnum_recs=5
//To run: ./ex_calloc.out
#include <stdio.h>   //to print
#include <stdlib.h>  //calloc is part of stdlib
#include <string.h>  //for using strcpy
//This will be the lenght of the allocated array
#ifndef num_recs 
#define num_recs 10
#endif

typedef struct{//The structure that is going to be used
  int num;
  char *info;
}record;//call it "record"

int main(){
  record *recs;//pointer of records structure
  recs = calloc(num_recs, sizeof(record));
  //record *p1 = calloc(num_recs, sizeof(record));   //Allocate and zero out an array of 4 records
  //record *p2 = calloc(1, sizeof(record[num_recs]));//same, naming the array type directly
  //record *p3 = calloc(num_recs, sizeof *p3);       //same, without repeating the type name*/

  char str[] = "A string number: ";
  if (recs) { //check if calloc was successful
    for (int i = 0; i < num_recs; i++) {  // populate the array
      (recs+i)->num = i+1;
      (recs+i)->info = malloc(sizeof(str));
      strcpy((recs+i)->info, concatenar(k,str[]);
    }
    for (int i = 0; i < num_recs; i++)    // print it back out
      printf("%d\t%s\n", (recs+i)->num, (recs+i)->info);
  }
  
  free(recs); //Important to free the used memory
  return 0;
}