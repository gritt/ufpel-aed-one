#include <stdio.h>
#include <stdlib.h>

#include "merge.h"

int main()
{
    int arraySize;
    int *theArray;
    
    scanf("%d", &arraySize);
    
    if ((theArray = malloc(arraySize * sizeof(int))) == NULL) {
        printf("Failed to allocate memory. exit");
    }
    
    theArray = malloc(arraySize * sizeof(int));
    
    
    populateTheArray(theArray, arraySize);
    
    
    

    
    printTheArray(theArray, arraySize);
    
    return 1;
}