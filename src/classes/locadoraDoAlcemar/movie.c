#include <stdio.h>
#include <stdlib.h>

#include "movie.h"
#include "parser.h"

struct movieMetadata
{
    int id;
    int year;
    int copies;
    
    char category;
    char title[100];
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
    int i, rows;
    char rowString[255];
    
    struct movieMetadata *movie;
    FILE *file;
    
    
    canOpenFile(file); //check
    file = fopen("input.txt", "r");
    
    
    fscanf(file, "%d", &rows);
    
    
    canAllocateMemory(rows); //check
    movie = malloc(rows * sizeof(struct movieMetadata));
    
    
    
    
    
    
    //todo idea.
    for (i = 1; i < rows; i++) {
        
        //all row contents
        fgets(rowString, 255, file);
        

        movie[i].id     =   i;
        movie[i].title  =   getTitle(rowString);
        movie[i].year   =   getYear(rowString);
        movie[i].category = getCategory(rowString);
    }
    
    printf("%d", rows);
    
    
    
    
    
    
    
    
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