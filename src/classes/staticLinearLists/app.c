#include <stdio.h>
#include <stdlib.h>

#include "staticList.h"

int main()
{
    int option, value, position;
    int listSize = LIST_SIZE;
    
    listDescriptorType *myList;
    
    myList = initializeListWithSize(listSize);
    
    while (option != 0) {
        
        printf("\nList of %d values built sucessfully\n", listSize);
        printf("\n(1)Insert\n(2)Get\n(3)Set\n(4)Delete\n(5)List Size\n");
        printf("\nChoose an option to manage the list:");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("\n\nInform the value to insert: ");
                scanf("%d", &value);
                
                printf("\n\nInform the position to insert: ");
                scanf("%d", &position);
                
                insert(myList, value, position);
                
                break;
                
            case 2:
                printf("\n\nInform the position you want to get: ");
                scanf("%d", &position);
                
                get(myList, position);
                
                break;
                
            case 3:
                printf("\n\nInform the value to set: ");
                scanf("%d", &value);
                
                printf("\n\nInform the position to set: ");
                scanf("%d", &position);
                
                set(myList, value, position);
                
                break;
                
            case 4:
                printf("\nInform the position to delete: ");
                scanf("%d", &position);
                
                delete(myList, position);
                break;
                
            case 5:
                printf("\n\nList Length: %d\n\n", listLength(myList));
                break;
                
            default:
                printf("\n\nInvalid Option\n\n");
                break;
        }
        
        printList(myList);
    }
    
    return 1;
}