#include <stdio.h>

#include 'input.h'



void buildArrayWithTaxonomy(int type)
{
    int size = ARRAY_SIZE;
    
    switch (type) {

        case 1:
            generateRandomInputForSize(size);
            break;
            
        case 2:
            generateBestCaseInputForSize(size);
            break;

        case 3:
            generateWorstCaseInputForSize(size);
            break;
            
        default:
            printf("\nInvalid option");
            break;
    }
}