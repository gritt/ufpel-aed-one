#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "merge.h"

int main()
{
    int arraySize;
    double seconds;
    
    int *theArray;
    int *theArrayCopy;
    
    
    scanf("%d", &arraySize);
    
    if ((theArray = malloc(arraySize * sizeof(int))) == NULL) {
        printf("Failed to allocate memory. exit");
    }
    
    
    theArray = malloc(arraySize * sizeof(int));
    theArrayCopy = malloc(arraySize * sizeof(int));
    
    
    populateTheArray(theArray, arraySize);
    
    
    //define start and end of the array
    int begin = theArray[0];
    int end = arraySize;
    
    
    
    clock_t clockStarts=clock();
    
    mergeSort(theArray, theArrayCopy, begin, end);
    
    clock_t clockEnds=clock();
    
    
    
    //print time //human readable
    seconds = (double)(clockEnds - clockStarts) / (double)CLOCKS_PER_SEC;
    
    printf("\nStarted at: %g", (double)clockStarts/(double)CLOCKS_PER_SEC);
    printf("\nCompleted at: %g", (double)clockEnds/(double)CLOCKS_PER_SEC);
    
    printf("\nExecution time in seconds: %g", seconds);

    
    return 1;
}