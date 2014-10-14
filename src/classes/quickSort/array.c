#include <stdio.h>
#include "input.h"

void buildArrayWithTaxonomy(int *theArrayPointer, int type, int arraySize)
{
    switch (type) {

        case 1:
            generateRandomInputForSize(theArrayPointer, arraySize);
            break;
            
        case 2:
            generateBestCaseInputForSize(theArrayPointer, arraySize);
            break;

        case 3:
            generateWorstCaseInputForSize(theArrayPointer, arraySize);
            break;
            
        default:
            printf("\nInvalid option");
            break;
    }
}

void printTheArray(int *theArrayPointer, int arraySize)
{
    printf("{");
    
    for (int i = 0; i < arraySize; i++) {
        printf("%d", theArrayPointer[i]);
        
        //dont print comma for the last int in array
        if (i + 1 == arraySize) {
            continue;
        }
        
        printf(",");
    }
    
    printf("} \n");
}