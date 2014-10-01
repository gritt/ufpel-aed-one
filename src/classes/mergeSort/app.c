#include <stdio.h>
#include <stdlib.h>

#include "merge.h"

int main()
{
    int arraySize;

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
    
    
    printTheArray(theArray, end);
    
    mergeSort(theArray, theArrayCopy, begin, end);
    
    printTheArray(theArray, end);

    
    return 1;
}