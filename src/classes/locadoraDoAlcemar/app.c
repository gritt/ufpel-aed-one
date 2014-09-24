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

        printf("\n\nContinue browsing store? (Y/N):");
        
        //workaround -- duplicate scanf to avoid \n issues
        scanf("%c", &continueBrowsing);
        scanf("%c", &continueBrowsing);
    }
}

