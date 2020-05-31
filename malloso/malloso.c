#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,n;
    int max = 20, min = 3;

    int *element;
	
    printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation :\n"); 
	printf("-------------------------------------------------------------------------\n"); 	
    printf(" Input total number of elements(1 to 20): ");
    
    scanf("%d",&n);

    while(n > max || n < min){        
        printf("%dX\nEnter a valid number:", n);
        scanf("%d",&n);
    }

    element=(int*)calloc(n,sizeof(int));  // Memory is allocated for 'n' elements 
    
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }

    printf("\n");
    for(i=0;i<n;++i)  
    {
       printf(" Number %d: ",i+1);
       scanf("%d",element + i);
    }
    clock_t begin = clock();
    
    for(i=1;i<n;++i)  
    {
       if(*element < *(element+i)) 
           *element = *(element+i);
       printf("%d ",*element);
    }
    
    printf(" The Largest element is :  %d \n",*element);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("time spent : %lf \n\n", time_spent);

    free(element);

    return 0;
}