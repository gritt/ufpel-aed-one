//
//  app.c
//
//
//  Created by Gilvan Ritter on 10/28/14.
//
//

#include "linkedList.h"


int main()
{
    int option, value, position;

    linkedList *myList;

    
    initializeList(myList);
    
    while (option != 0) {
        
        printf("\n(1)Insert\n(2)Get\n(3)Set\n(4)Delete\n(5)Print");
        printf("\nChoose an option to manage the list:");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("\n\nInform the value to insert: ");
                scanf("%d", &value);
                
                printf("\n\nInform the position to insert: ");
                scanf("%d", &position);
                
                insert(value, position, myList);
                break;
                
            case 2:
                printf("\n\nInform the position you want to get: ");
                scanf("%d", &position);
                
                get(position, myList);
                break;
                
            case 3:
                printf("\n\nInform the value to set: ");
                scanf("%d", &value);
                
                printf("\n\nInform the position to set: ");
                scanf("%d", &position);
                
                set(value, position, myList);
                break;
                
            case 4:
                printf("\nInform the position to delete: ");
                scanf("%d", &position);
                
                delete(position, myList);
                break;
                
            case 5:
                printf("\n\nThe List currently: \n");

                print(myList);
                break;
                
            default:
                printf("\n\nInvalid Option\n\n");
                break;
        }
        
        print(myList);
    }
    
    return 1;
}
