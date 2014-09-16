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
movieType * populateMoviesCatalog()
{
    int rows;
    movieType *moviePointer;
    
    
    FILE *file;
    
    canOpenFile(file); //check
    file = fopen("inputDev.txt", "r");
    
    
    fscanf(file, "%d", &rows);
    
    
    canAllocateMemory(rows); //check
    moviePointer = (movieType *)malloc(rows * sizeof(movieType));


    //read from file, save to struct
    parseCatalog(rows, file, moviePointer);
    
    return moviePointer;
}


int countMoviesRows()
{
    int moviesRows;
    
    FILE *file;
    
    file = fopen("inputDev.txt", "r");

    fscanf(file, "%d", &moviesRows);
    
    return moviesRows;
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