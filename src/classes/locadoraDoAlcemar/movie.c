#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movie.h"

struct movieMetadata
{
    int id;
    int year;
    int copies;
    
    char title[100];
    char category[100];
};

/*
 * Check if a file can be opened
 */
int canOpenFile(FILE *file)
{
    if ((file = fopen("input.txt", "r")) == NULL) {
        printf("ERROR: File could not be loaded");
        return 0;
    }
    return 1;
}

/*
 * Check if program can allocate memory
 */
int canAllocateMemory(int rows)
{
    if (malloc(rows * sizeof(struct movieMetadata)) == NULL) {
        printf("Impossible to allocate space");
        return 0;
    }
    return 1;
}

/*
 * Read input file
 * Allocate memory
 * Populate memory with file contents
 * 
 * Return pointer to access catalog
 */
int populateMoviesCatalog()
{
    int rows, rowSize, titleStringSize, categoryStringSize;
    char rowString[255], character;
    
    struct movieMetadata *movie;
    FILE *file;
    
    
    canOpenFile(file); //check
    file = fopen("inputDev.txt", "r");
    
    
    fscanf(file, "%d", &rows);
    

    canAllocateMemory(rows); //check
    movie = malloc(rows * sizeof(struct movieMetadata));
    
    
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

        //________0________;__1__;2;_3__
        //O DOSSIE DE ODESSA;1998;2;DRAMA
        int isWritingOn = 0;
        
        for (int j=0; j < rowSize; j++) {
            
            
            if (rowString[j] == ';') {
                //change where it's going to save
                isWritingOn++;

                //skip the ';'
                j++;
            }
            
            switch (isWritingOn) {

                case 0:
                    //save to title
                    titleStringSize = strlen(movie[i].title);
                    
                    movie[i].title[titleStringSize] = rowString[j];

                    titleStringSize++;
                    break;
                
                case 1:
                    //save to year
//                    movie[i].year = rowString[j];
//                    printf("%c", rowString[j]);
                    break;
                
                case 2:
                    //save to copies
//                    movie[i].copies = rowString[j];
//                    printf("%c", rowString[j]);
                    break;
                
                case 3:
                    //save to category
                    categoryStringSize = strlen(movie[i].category);
                    
                    movie[i].category[categoryStringSize] = rowString[j];
                    
                    categoryStringSize++;
                    break;

                default:
                    //look at my horse, my horse is amazing
                    break;
            }
        }

//        printf("%s", rowString);
    }
    
//    printf("%d", rows);
    

    return 1;
}


void locateMovie()
{
}

void returnMovie()
{
}

void searchMovie()
{
}

void showMovie()
{
}