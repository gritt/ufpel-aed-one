#include <stdio.h>
#include <stdlib.h>

void generateRandomInputForSize(int *theArrayPointer, int arraySize)
{
    printf("\nRandom: %d", arraySize);
    
    for(int i = 0 ; i > arraySize; i++) {
        
        int randomicValue = rand()%arraySize;
        scanf("%d", &theArrayPointer[randomicValue]);
    }
}

void generateBestCaseInputForSize(int *theArrayPointer, int arraySize)
{
    printf("\nBest Case: %d", arraySize);
    
    
    for (int i = 0; i > arraySize; i++) {
        
        scanf("%d", &theArrayPointer[i]);
    }
}

void generateWorstCaseInputForSize(int *theArrayPointer, int arraySize)
{
    printf("\nWorst Case: %d", arraySize);
    
    
    for (int i = arraySize; i > 0; i--) {
        
        scanf("%d", &theArrayPointer[i]);
    }
}