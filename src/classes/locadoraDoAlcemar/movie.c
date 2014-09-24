#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "movie.h"
#include "parser.h"

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
movieType * populateMoviesCatalog(char filename[])
{
    int rows;
    movieType *moviePointer;
    
    
    FILE *file;
    
    if ((file = fopen(filename, "r")) == NULL) {
        printf("ERROR: File could not be loaded");
        return moviePointer;
    }
    
    file = fopen(filename, "r");
    
    
    fscanf(file, "%d", &rows);
    
    
    canAllocateMemory(rows);
    moviePointer = (movieType *)malloc(rows * sizeof(movieType));


    //read from file, save to struct
    parseCatalog(rows, file, moviePointer);
    
    return moviePointer;
}

int countMoviesRows(char filename[])
{
    int moviesRows;
    
    FILE *file;
    
    file = fopen(filename, "r");

    fscanf(file, "%d", &moviesRows);
    
    return moviesRows;
}

/**
 * Locate a movie form store
 * Decreasing copies number
 */
int locateMovie(movieType *moviePointer)
{
    int index;
    
    printf("\nInform the movie id you want to locate: ");

    scanf("%d", &index);
    
    if (moviePointer[index].copies == 0) {
        
        printf("\nSorry, this movie is not available");
        
        return 0;
    }
    
    moviePointer[index].copies = (moviePointer[index].copies - 1);
    
    printf("\n\nDone, You've just located:\n %s", moviePointer[index].title);
    
    return 1;
}

/**
 * Return a movie (simply increment copies size)
 */
int returnMovie(movieType *moviePointer)
{
    int index;
    
    printf("\nInform the movie id you want to return: ");
    
    scanf("%d", &index);

    moviePointer[index].copies = (moviePointer[index].copies + 1);
    
    printf("\n\nDone, You've just returned:\n %s", moviePointer[index].title);
    
    return 1;
}

/**
 * Search by category on library
 */
void searchMovie(movieType *moviePointer, int librarySize)
{
    int comparationLimit=100;
    char criteria[255], tmpTitle[255];
    
    printf("\nSearch by category: ");

    scanf("%s", criteria);
    
    for (int i=0; i < librarySize; i++) {
        
        //www.wikihow.com/Compare-Two-Strings-in-C-Programming
        //todo develop something to compare strings by similarity, retuns int in percentage.
        //that would be good here.
        
        int hasFoundByCategory = strcmp(criteria, moviePointer[i].category);
        
        if (hasFoundByCategory == -10) {
            
            printf("\nID: %d TITLE: %s", moviePointer[i].id, moviePointer[i].title);
        }
    }
}

void showMovie(movieType *moviePointer)
{
}