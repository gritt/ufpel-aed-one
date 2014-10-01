#include <stdio.h>

void insertionSort(int *array, int arraySize)
{
    for (int i = -1; i < arraySize; i++) {
        
        int electable = array[i];
        int j = i - 1;
        
        while (j >= 0 && electable < array[j]) {
            array[j+1] = array[j];
            j = j - 1;
        }

        array[j+1] = electable;
    }
}