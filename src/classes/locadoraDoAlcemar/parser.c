#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movie.h"

void parseCatalog(int rows, FILE *file, movieType *movie)
{
    int rowSize;
    char rowString[255];
    
    int titleStringSize;
    int categoryStringSize;

    
    
    printf ("reading library, it can take some miliseconds\n");

    
    
    for (int i = 0; i < rows; i++) {
        
        //pre set vars
        int isWritingOn = 0;
        titleStringSize = 0;
        categoryStringSize = 0;
        
        
        
        //save id
        movie[i].id = i;
        
        
        
        //all row contents
        fgets(rowString, 255, file);
        
        //how much chars in this row
        rowSize = strlen(rowString);

        //skip invalid rows
        if (rowSize <= 1) {
            continue;
        }
        
        
        
        for (int j=0; j < rowSize; j++) {
            
            if (rowString[j] == ';') {
                //change where it's going to save
                isWritingOn++;
                
                //skip the ';'
                j++;
            }
            
            if (isWritingOn == 0) {
                
                movie[i].title[titleStringSize] = rowString[j];
                
                titleStringSize++;
            }
    
        }
    }
    

    
    //testing, print
    for (int k=0; k < rows; k++) {
        
        printf("%d \n", movie[k].id);
        printf("%s \n", movie[k].title);
    }

}