#include <stdio.h>
#include <stdlib.h>

#include "staticList.h"

int main()
{
    int listSize = LIST_SIZE;
    int option;
    
    listDescriptorType *myList;
    
    myList = initializeListWithSize(listSize);
    
    printf("\nList of %d values built sucessfully\n", listSize);
    
    printf("\n(1)Insert\n(2)Get\n(3)Set\n(4)Delete\n(5)List Size\n");

    printf("\nChoose an option to manage the list:");

    scanf("%d", &option);
    
    switch (option) {
        case 1:
            printf("1");
            break;

        case 2:
            printf("2");
            break;
            
        case 3:
            printf("3");
            break;
            
        case 4:
            printf("4");
            break;
            
        case 5:
            printf("5");
            break;

        default:
            printf("invalid");
            break;
    }
    
    return 1;
}