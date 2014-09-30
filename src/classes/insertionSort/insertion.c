#include <stdio.h>

void insertionSort(int *array, int arraySize)
{
	
}

void populateTheArray(int *array, int arraySize)
{
    for (int i=1; i < arraySize; i++) {
        
        scanf("%d", &array[i]);
    }
}

void printTheArray(int *array, int arraySize)
{
    printf("{");
    
    for (int i=1; i < arraySize; i++) {
        printf("%d", array[i]);

        //dont print comma for the last int in array
        if (i+1 == arraySize) {
            continue;
        }
        
        printf(",");
    }
    
    printf("}");
}