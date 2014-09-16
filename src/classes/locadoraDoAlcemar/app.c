#include <stdio.h>
#include <stdbool.h>

#include "movie.h"

void printMenu()
{
    //1 - search movie
    //2 - locate movie
    //3 - return movie
}

int main ()
{
    int librarySize, menuOption;
    bool wantToExit;
    
    movieType *moviePointer;
    
    //populate movie catalog from file
    moviePointer = populateMoviesCatalog();
    
    
    //how much movies in library
    librarySize = countMoviesRows();
    
    
    
    printf("What do you search for in my humble movie store? \n");
    
    
    
    do {
        
        scanf("%d", &menuOption);
        
        
        switch (menuOption) {

            case 1:
                
                break;
            
            case 2:
                
                break;
                
            case 3:
                break;
                

            default:
                printf("\nInvalid option.\n");
                break;
        }
    
    } while (wantToExit == true);

    
    //show menu here;
    
//    for (int k=1; k < librarySize; k++) {
//        
//        printf("id :%d \n", moviePointer[k].id);
//        printf("title: %s \n", moviePointer[k].title);
//        
//        printf("year: %d \n", moviePointer[k].year);
//        printf("copies: %d \n", moviePointer[k].copies);
//        
//        printf("category: %s \n", moviePointer[k].category);
//    }
    
}

