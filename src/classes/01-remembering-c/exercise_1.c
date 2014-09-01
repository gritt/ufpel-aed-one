#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int rows, rowValue, rowsValuesSum, i;
    int *rowsValuesVector;
    float medium;
    
    
    
    //Open file input file in read modee
    FILE *file;
    
    if ((file = fopen(argv[1], "r")) == NULL) {
        printf("ERROR: File could not be loaded");
        exit(0);
    }
    
    file = fopen(argv[1], "r");
    

    
    //Number os rows in the input file
    fscanf(file, "%d", &rows);
    
    //Allocate space to store the input values
    if ((rowsValuesVector = malloc(rows * sizeof(int))) == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    rowsValuesVector = malloc(rows * sizeof(int));

    
    
    //Store input values and sum all values
    for (i=0; i<rows; i++) {
        
        fscanf(file, "%d", &rowValue);
        
        rowsValuesVector[i] = rowValue;
        rowsValuesSum += rowValue;
        
        
        //Display values which the vector will contain
        printf("%d \n", rowValue);
    }

    
    
    //Display media;
    medium = rowsValuesSum/rows;
    printf("%.2f \n", medium);
    
    
    
	fclose(file);
    return 0;
}
