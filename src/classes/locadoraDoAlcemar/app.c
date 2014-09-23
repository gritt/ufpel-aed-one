#include <stdio.h>

#include "movie.h"

void printMenu()
{
    printf("\n(1) Search Movie. \n");
    printf("\n(2) Return Movie. \n");
    printf("\n(3) Locate Movie. \n");
}

int main ()
{
    int librarySize, menuOption;
    char continueBrowsing = 'Y';
    
    movieType *moviePointer;
    moviePointer = populateMoviesCatalog();
    
    
    //how much movies in library
    librarySize = countMoviesRows();
    
    printf("What do you search for in my humble movie store? \n");
    

    while (continueBrowsing == 'Y') {
    
        printMenu();
        
        scanf("%d", &menuOption);
        
        switch (menuOption) {

            case 1:
                searchMovie(moviePointer, librarySize);
                break;
                
            case 2:
                // returnMovie(moviePointer);
                break;
                
            case 3:
                locateMovie(moviePointer);
                break;

            default:
                printf("\nInvalid option.\n");
                break;
        }
        
        
        printf("\n\nContinue browsing store? (Y/N): ");
        
        scanf("%c", &continueBrowsing);
    }

    
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

