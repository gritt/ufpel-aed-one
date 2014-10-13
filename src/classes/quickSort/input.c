#include <stdio.h>
#include <stdlib.h>

void generateRandomInputForSize(int *theArrayPointer, int arraySize)
{
    for(int i=0; i < arraySize; i++) {
        theArrayPointer[i] = rand()%arraySize;
    }
}

void generateBestCaseInputForSize(int *theArrayPointer, int arraySize)
{
    for (int i=0; i < arraySize; i++) {
        theArrayPointer[i] = i;
    }
}

void generateWorstCaseInputForSize(int *theArrayPointer, int arraySize)
{
    for (int i=arraySize, j=-1; i > 0; i--, j++) {
        theArrayPointer[j] = i;
    }
}