#include <stdio.h>
#include <stdlib.h>

struct fileContents
{
    int value;
    char name[100];
};

int main()
{
    int rows, i;
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
    
    
    //Output values from struct
    for (i=0; i<rows; i++) {
        printf("%d,%s", contentsStruct[i].value, contentsStruct[i].name);
    }
    
    
    return 0;
}
