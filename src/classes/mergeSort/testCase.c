#include <stdio.h>
#include <stdlib.h>

void printHundredMilion(int size);
void printTwoHundredThousand(int size);

int main (int argc, char *argv[])
{
    char *p;
    int num;
    
    long conv = strtol(argv[1], &p, 10);

    num = conv;

    //gambi here.
    //fuck it, I didn't sleep
    //I want it to make the test files automatically.
    //but with size defined in the makefile
    //it converts to base 10, change to
    
    if (num == 100) {
        printHundredMilion(100000000);
    }
    
    if (num == 200) {
        printTwoHundredThousand(200000);
    }

    return 0;
}

void printHundredMilion(int size)
{
    printf("%d", size);
    
    for(int i = 0 ; i < size; i++) {
        printf("%d \n", rand()%size);
    }
}

void printTwoHundredThousand(int size)
{
    printf("%d", size);
    
    for(int i = 0 ; i < size; i++) {
        printf("%d \n", rand()%size);
    }
}