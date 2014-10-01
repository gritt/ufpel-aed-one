#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("%d \n", 100000000);
    
    for(int i = 0 ; i < 100000000; i++) {
        printf("%d \n", rand()%100000000);
    }
}