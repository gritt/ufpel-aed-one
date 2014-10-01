#include <stdio.h>

#include "merge.h"


void mergeSort(int *array, int *arrayCopy, int begin, int end)
{
    //where 'end' is also the current array size;
    printTheArray(array, end);
    
    
    //if passes it's the base case
    if ((end - begin) == 1) {
        return;
    }
    
    
    //where will split
    int middle = (begin + end ) / 2;
    
    
    
    //split from begining to mid
    mergeSort(array, arrayCopy, begin, middle);
    
    //split from middle + 1 to end
    mergeSort(array, arrayCopy, middle, end);
    
    
    
    //compares positions and swap
    merge(array, arrayCopy, begin, middle, end);
    
    
    //copy merged array
    copyArray(array, arrayCopy, begin, end);
}


void merge(int *array, int *arrayCopy, int begin, int middle, int end)
{
    int i0 = begin;
    int i1 = middle;
    
    for (int j = begin; j < end; j++) {
    
        if (i0 < middle && (i1 >= end || array[i0] <= array[i1])) {
            arrayCopy[j] = array[i0];
            i0++;
        
        }else {
            arrayCopy[j] = array[i1];
            i1++;
        }
    }
}

void copyArray(int *array, int *arrayCopy, int begin, int end)
{
    for (int i = begin; i < end; i++) {
        
        array[i] = arrayCopy[i];
    }
}























void populateTheArray(int *array, int arraySize)
{
    for (int i = 0; i < arraySize; i++) {
        
        scanf("%d", &array[i]);
    }
}

void printTheArray(int *array, int arraySize)
{
    printf("{");
    
    for (int i = 0; i < arraySize; i++) {
        printf("%d", array[i]);
        
        //dont print comma for the last int in array
        if (i + 1 == arraySize) {
            continue;
        }
        
        printf(",");
    }
    
    printf("} \n");
}