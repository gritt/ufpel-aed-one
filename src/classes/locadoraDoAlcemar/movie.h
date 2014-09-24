#ifndef MOVIE_H_
#define MOVIE_H_

struct movieMetadata
{
    int id;
    int year;
    int copies;
    
    char title[100];
    char category[100];
};

typedef struct movieMetadata movieType;

movieType * populateMoviesCatalog(char filename[]);

int countMoviesRows(char filename[]);

int locateMovie(movieType *moviePointer);
int returnMovie(movieType *moviePointer);


void searchMovie(movieType *moviePointer, int librarySize);

// void showMovie(movieType *moviePointer);

#endif