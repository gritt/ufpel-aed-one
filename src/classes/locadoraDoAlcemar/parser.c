#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movie.h"

void parseCatalog(int rows, FILE *file, movieType *movie)
{
    int rowSize;
    int titleStringSize;
    int categoryStringSize;
    char rowString[255];


    printf("here");
    for (int i = 1; i < rows; i++) {
        
        //all row contents
        fgets(rowString, 255, file);
        
        //how much chars in this row
        rowSize = strlen(rowString);
        
        //skip invalid rows
        if (rowSize <= 1) {
            continue;
        }
        
        movie[i].id = i;
        
    
        int isWritingOn = 0;
        
        /*
         
        for (int j=0; j < rowSize; j++) {
            
            printf("%s\n", rowString);
            
            if (rowString[j] == ';') {
                //change where it's going to save
                isWritingOn++;
                
                //skip the ';'
                j++;
            }
            
            
            //save to title
            if (isWritingOn == 0) {
                
                titleStringSize = strlen(movie[i].title);
                
                movie[i].title[titleStringSize] = rowString[j];
                
                titleStringSize++;
                break;
                
            }
            
            //save to year
            if (isWritingOn == 1) {
                break;
            }
            
            //save to copies
            if (isWritingOn == 2) {
                break;
            }
            
            //save to category
            if (isWritingOn == 3) {
                
                categoryStringSize = strlen(movie[i].category);
                
                movie[i].category[categoryStringSize] = rowString[j];
                
                categoryStringSize++;
                break;
            }
            
        }
        
        */
    }
    
}