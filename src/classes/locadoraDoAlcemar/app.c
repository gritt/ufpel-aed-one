#include <stdio.h>
#include "movie.h"

void buildMenu()
{
}

int main ()
{
    movieType *moviePointer;
    int librarySize;
    

    //populate movie catalog from file
    moviePointer = populateMoviesCatalog();
    
    
    //how much movies in library
    librarySize = countMoviesRows();

    
    //show menu here;
    
    for (int k=1; k < librarySize; k++) {
        
        printf("id :%d \n", moviePointer[k].id);
        printf("title: %s \n", moviePointer[k].title);
        
        printf("year: %d \n", moviePointer[k].year);
        printf("copies: %d \n", moviePointer[k].copies);
        
        printf("category: %s \n", moviePointer[k].category);
    }
    
    
}

