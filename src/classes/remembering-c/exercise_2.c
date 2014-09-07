#include <stdio.h>
#include <stdlib.h>

struct fileContents
{
    int value;
    char name[100];
};

int main(int argc, char *argv[])
{
    int rows, i;
    struct fileContents *contentsStruct;
    
    
    //Open file input file in read mode
    FILE *file;
    
    if ((file = fopen(argv[1], "r")) == NULL) {
        printf("ERROR: File could not be loaded");
        exit(0);
    }
    
    file = fopen(argv[1], "r");
    
    
    
    //Number os rows in the input file
    fscanf(file, "%d", &rows);

    //Allocate space store values on fileContents struct
    contentsStruct = malloc(rows * sizeof(struct fileContents));
    if (contentsStruct == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    
    
    //Store input values on fileContents struct throw contentsStruct pointer
    for (i=0; i<rows; i++) {
        fscanf(file, "%d", &contentsStruct[i].value);
        fgets(contentsStruct[i].name, 100, file);
    }
    
    fclose(file);
    
    
    
    //Output values from struct
    for (i=0; i<rows; i++) {
        printf("%d,%s", contentsStruct[i].value, contentsStruct[i].name);
    }
    

    return 0;
}
