#include <stdio.h>
#include "03-01_extern3_manipulate.c"

void displayData(void);
void manipulateData(void);

int data[5] = { 2, 3, 5, 7, 9 };

int main()
{
    displayData();
    manipulateData();
    displayData();

    return(0);
}
