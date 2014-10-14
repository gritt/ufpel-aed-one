#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array.h"
#include "quickSort.h"

int main()
{
    int *theArray;
    int type, size = ARRAY_SIZE;
    double seconds;
    
    
    
    printf("\nChoose the array type");
    printf("\n(1)Random | (2) Best case | (3) Worst case: ");
    scanf("%d", &type);
    
    
    
    if ((theArray = malloc(size * sizeof(int))) == NULL) {
        printf("Failed to allocate memory. exit");
    }
    
    theArray = malloc(size * sizeof(int));
    
    
    
    buildArrayWithTaxonomy(theArray, type, size);
    int pivot = 0;
    
    
    
    clock_t clockStarts=clock();
    
    quickSort(theArray, pivot, size);
    
    clock_t clockEnds=clock();
    
    
    
    //print time //human readable
    seconds = (double)(clockEnds - clockStarts) / (double)CLOCKS_PER_SEC;
    
    printf("\nStarted at: %g", (double)clockStarts/(double)CLOCKS_PER_SEC);
    printf("\nCompleted at: %g", (double)clockEnds/(double)CLOCKS_PER_SEC);
    
    printf("\nExecution time in seconds: %g", seconds);
    
    return 1;
}