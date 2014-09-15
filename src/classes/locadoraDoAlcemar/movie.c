#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "movie.h"
#include "parser.h"


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
    if ((movieType *)malloc(rows * sizeof(movieType)) == NULL) {
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
    int rows;
    movieType *moviePointer;
    
    
    FILE *file;
    
    canOpenFile(file); //check
    file = fopen("inputDev.txt", "r");
    
    
    fscanf(file, "%d", &rows);
    
    
    canAllocateMemory(rows); //check
    moviePointer = (movieType *)malloc(rows * sizeof(movieType));


    parseCatalog(rows, file, moviePointer);
    
    

    // yey, content it's being saved on the right reference
    //check out
    for (int k=1; k < rows; k++) {
        
        printf("id :%d \n", moviePointer[k].id);
        printf("title: %s \n", moviePointer[k].title);
        
        printf("year: %d \n", moviePointer[k].year);
        printf("copies: %d \n", moviePointer[k].copies);

        printf("category: %s \n", moviePointer[k].category);
    }
    

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