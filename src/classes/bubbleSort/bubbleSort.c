#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *array, int arraySize)
{
    int i, j, temp;

    for (i=1; i < arraySize; i++) {
        
        for (j = 0; j < arraySize - 1; j++) {

            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
    }
}

int main()
{
    int rows, i, iterator, rowValue, *arrayToBeSort;
    
    //first line - how many rows have to read
    scanf("%d", &rows);
    
    
    //allocate space for all inputs
    if ((arrayToBeSort = malloc(rows * sizeof(int))) == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    arrayToBeSort = malloc(rows * sizeof(int));
    
    
    //store all in vector
    for (iterator = 0; iterator < rows; iterator++) {
        
        scanf("%d", &rowValue);
        
        arrayToBeSort[iterator] = rowValue;
    }
    
    
    //todo: start counting time
    bubbleSort(arrayToBeSort, rows);
    //finish counting time
    
    
    for (i = 0; i < rows; i++) {
        printf("%d\n", arrayToBeSort[i]);
    }
    
    return 0;
}