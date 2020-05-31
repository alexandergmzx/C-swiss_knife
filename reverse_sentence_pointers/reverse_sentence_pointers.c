// reverse_sentence_pointers.c
#include <stdio.h>

int main()
{
    char str[100];
    char rev[100];
    char *sptr = str; // sptr stores the BASE ADDRESS of the str
    char *rptr = rev; // rptr stores the BASE ADDRESS of the reverse

    int i = -1; //declaring i terator and defining it to -1 

    printf("\n\nEnter a string: ");
    scanf("%s", str);

    // storing the ending address of str in sptr
    while(*sptr)
    {
        sptr++;
        i++; // i is the index of the end location
    }

    // storing the string str in rev in reverse order
    while(i >= 0)
    {
        /* First decrementing then using as it stores 
           the location after the end location due to above while loop */
        sptr--; 
        *rptr = *sptr;  // storing the value in sptr in rptr
        rptr++; // pointing to next location
        i--;    // decrementing the index
    }
    /*  String should always end with '\0' so explicitly 
        putting it at the end of the string */
    *rptr = '\0'; 
    rptr = rev; // restoring the BASE ADDRESS of the reverse string

    // storing the reverse string in the original string
    while(*rptr)
    {
        *sptr = *rptr;
        sptr++;
        rptr++;
    }
    // printing the reverse string
    printf("\n\nReverse of the string is: %s ", str);
    return 0;
}