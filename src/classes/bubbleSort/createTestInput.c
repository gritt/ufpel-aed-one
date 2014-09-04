#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, values;
    
    scanf("%d", &values);
    
    //how many lines
    printf("%d \n", values);
    
    //stdout > file
    for(i = 0 ; i < values ; i++) {
        
        printf("%d \n", rand());
    }

    return 0;
}
