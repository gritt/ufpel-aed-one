#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("%d \n", 200);
    
    for(int i = 0 ; i < 200; i++) {
        printf("%d \n", rand()%200);
    }
    
    return 0;
}