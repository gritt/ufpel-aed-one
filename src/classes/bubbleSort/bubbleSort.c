#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *array, int arraySize);

int main()
{
    int rows, iterator, rowValue, *arrayToBeSort;
    double seconds;
    
    //first line - how many rows have to read
    scanf("%d", &rows);
    
    
    //allocate space for all inputs
    if ((arrayToBeSort = malloc(rows * sizeof(int))) == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    arrayToBeSort = malloc(rows * sizeof(int));
    
    
    //store all in array
    for (iterator = 0; iterator < rows; iterator++) {
        
        scanf("%d", &rowValue);
        
        arrayToBeSort[iterator] = rowValue;
    }
    
    
    //start timer
    clock_t clockStarts=clock();
    
    bubbleSort(arrayToBeSort, rows);
    
    clock_t clockEnds=clock();
    //finishes timer

    
    //print time //human readable
    seconds = (double)(clockEnds - clockStarts) / (double)CLOCKS_PER_SEC;

    printf("\nStarted at: %g", (double)clockStarts/(double)CLOCKS_PER_SEC);
    printf("\nCompleted at: %g", (double)clockEnds/(double)CLOCKS_PER_SEC);
    
    printf("\nExecution time in seconds: %g", seconds);
    
    return 0;
}

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
