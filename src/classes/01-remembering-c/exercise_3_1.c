#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int rows, rowValue, rowsValuesSum, i;
    int *rowsValuesVector;
    float arithmeticMean;
    
    
    //Number os rows in the input file
    scanf("%d", &rows);
    
    //Allocate space to store the input values
    if ((rowsValuesVector = malloc(rows * sizeof(int))) == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    rowsValuesVector = malloc(rows * sizeof(int));
    
    
    //Store input values and sum all values
    for (i=0; i<rows; i++) {
        
        scanf("%d", &rowValue);
        
        rowsValuesVector[i] = rowValue;
        rowsValuesSum += rowValue;
        
        
        //Display values which the vector will contain
        printf("%d,", rowValue);
    }
    
    
    //Display medium;
    arithmeticMean = (float)rowsValuesSum/(float)rows;
    printf("\narithmetic mean: %.2f \n", arithmeticMean);
    
    return 0;
}
