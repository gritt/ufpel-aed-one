#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("%d \n", 200000);
    
    for(int i = 0 ; i < 200000; i++) {
        printf("%d \n", rand()%200000);
    }
}