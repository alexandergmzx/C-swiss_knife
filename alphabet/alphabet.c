#include <stdio.h>

#define size_alphabet (26)

char add_array(int size, char *ptr);
void print_array(int size, char *ptr);

int main()
{
    char alph[27];
    char *ptr;
 	printf("\n\n Pointer : Print all the alphabets:\n"); 
	printf("----------------------------------------\n");
    
    ptr = alph;//initialize the pointer

    ptr = (char)add_array(size_alphabet,ptr);

    ptr = alph;//return pointer to origin of array (alph[0])

    print_array(size_alphabet,ptr);

    return(0);
}

char add_array(int size, char *points){
    char *iter;
    iter = points;
    for(int x=0;x<size;x++)
    {
        *iter = x + 'a';
        iter++;
    }
    return (char)iter;
}

void print_array(int size, char *ptr){
    printf(" The Alphabets are : \n");
    for(int x=0;x<size;x++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
}