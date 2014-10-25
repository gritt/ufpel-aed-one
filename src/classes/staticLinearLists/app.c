#include <stdio.h>
#include <stdlib.h>

#include "staticList.h"

int main()
{
    int option, value, position;
    int listSize = LIST_SIZE;
    
    listDescriptorType *myList;
    
    myList = initializeListWithSize(listSize);
    
    
    
    printf("\nList of %d values built sucessfully\n", listSize);
    printf("\n(1)Insert\n(2)Get\n(3)Set\n(4)Delete\n(5)List Size\n");
    printf("\nChoose an option to manage the list:");
    scanf("%d", &option);
    
    while (option != 0) {
        
        switch (option) {
            case 1:
                printf("\n\nInform the value to insert: ");
                scanf("%d", &value);
                
                printf("\n\nInform the position to insert: ");
                scanf("%d", &position);
                
                insert(myList, value, position);
                break;
                
            case 2:
                printf("2");
                break;
                
            case 3:
                printf("3");
                break;
                
            case 4:
                printf("\nInform the position to delete: ");
                scanf("%d", &position);
                
                delete(myList, position);
                break;
                
            case 5:
                printf("5");
                break;
                
            default:
                printf("invalid");
                break;
        }
        
        printList(myList);
        
        printf("\n(0)To exit, or choose an option: ");
        scanf("%d", &option);
    }
    
    return 1;
}