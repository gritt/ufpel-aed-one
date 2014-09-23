#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "movie.h"

void parseCatalog(int rows, FILE *file, movieType *movie)
{
    int rowSize;
    char rowString[255];
    
    
    printf ("\nreading library, it can take some miliseconds...\n\n");
    
    
    for (int i = 0; i < rows; i++) {
        

        printf("\n+");
        
        //aux variables
        int isWritingOn = 0;

        int titleStringSize = 0;
        int categoryStringSize = 0;

        int length = 0;
        int year = 0;
        int copies = 0;
        
        
        fgets(rowString, 255, file);
        
        rowSize = strlen(rowString);

        //skip invalid rows
        if (rowSize < 3) {
            continue;
        }
        
        //save id
        movie[i].id = i;
        
        for (int j = 0; j < rowSize; j++) {
            
            printf("=");
            
            if (rowString[j] == ';') {
                //change where it's going to save
                isWritingOn++;
                
                //skip the ';'
                j++;
            }
            
            //title //get char by char
            if (isWritingOn == 0) {
                
                movie[i].title[titleStringSize] = rowString[j];
                titleStringSize++;
            }
            
            //year //get it all once
            if (isWritingOn == 1) {

                //atoi.
                //stackoverflow.com/a/868499/2523445
                year = atoi(&rowString[j]);
                movie[i].year = year;
                
                
                // ex: 1998 = 4 chars, so increment j+4
                // so the next char it is going to read
                // is after year and not like 998 -> 98 -> 8
                
                //stackoverflow.com/a/4143035/2523445
                length = (year == 0 ? 1 : (int)(log10(year)+1));
                

                //next valid string to read is on
                //j + lentgh of the year string + 1(;)
                j = j + length + 1;
                isWritingOn++;
            }
            
            //copies //get it all once
            if (isWritingOn == 2) {

                copies = atoi(&rowString[j]);
                movie[i].copies = copies;
                
                length = (copies == 0 ? 1 : (int)(log10(copies)+1));
                
                j = j + length + 1;
                isWritingOn++;
            }
            
            //category //get char by char
            if (isWritingOn == 3) {

                movie[i].category[categoryStringSize] = rowString[j];
                categoryStringSize++;
            }
        }
    }
    
    printf("\n\nDone! Library fully loaded.\n\n");
}
