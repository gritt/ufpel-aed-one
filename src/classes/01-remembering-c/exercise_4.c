#include <stdio.h>
#include <stdlib.h>

struct fileContents
{
    int value;
    char name[100];
};

int sumStructs(struct fileContents *struct1, struct fileContents *struct2)
{
    return struct1->value + struct2->value;
}

int main()
{
    int rows, i, structsSumResult;
    struct fileContents *contentsStruct;
    
    //Number os rows in the input file
    scanf("%d", &rows);
    
    //Allocate space store values on fileContents struct
    contentsStruct = malloc(rows * sizeof(struct fileContents));
    if (contentsStruct == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    //Store input values on fileContents struct throw contentsStruct pointer
    for (i=0; i<rows; i++) {
        scanf("%d", &contentsStruct[i].value);
        fgets(contentsStruct[i].name, 100, stdin);
    }
    
    
    
    //Output values from struct //just to output in the stdout
    for (i=0; i<rows; i++) {
        printf("%d,%s", contentsStruct[i].value, contentsStruct[i].name);
    }
    
    //Pass mem address of struct on indexes 1 and 2 to sum function
    structsSumResult =  sumStructs(&contentsStruct[0], &contentsStruct[1]);
    
    printf("\nSum result: %d", structsSumResult);


    return 0;
}
