#include <stdio.h>
#include <stdlib.h>

#include "insertion.h"

int main()
{
    int arraySize;
    int *theArray;
    
    scanf("%d", &arraySize);
    
    if ((theArray = malloc(arraySize * sizeof(int))) == NULL) {
        printf("Failed to allocated memory. exit");
    }
    
    theArray = malloc(arraySize * sizeof(int));
    
    

    
    populateTheArray(theArray, arraySize);
    
    printTheArray(theArray, arraySize);
    
    insertionSort(theArray, arraySize);
    

    return 1;
}