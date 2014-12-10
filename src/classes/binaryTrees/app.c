#include <stdio.h>
#include <app.h>



int main()
{
    int selectedMenu;
    
    do {
    
        printMenu();
        
        scanf("%d", &selectedMenu);
        
        performAction(selectedMenu);
        
        printf("Do you want to continue? \n");
        
    } while (selectedMenu != 0);
    
    return 1;
}


void printMenu()
{
    printf("\n(1) - Insert Item");
    printf("\n(2) - Show Tree");
    printf("\n(3) - Search in Tree");

    printf("\n(4) - Minimum");
    printf("\n(5) - Maximum");
    
    printf("\n(6) - Predecessor");
    printf("\n(7) - Successor");
    
    printf("\n(8) - Delete Item");
}

void performAction(int actionIdentifier)
{
    switch (actionIdentifier) {
        case 1:
            //insert
            break;
        case 2:
            //show
            break;
        case 3:
            //search
            break;
        case 4:
            //minimum
            break;
        case 5:
            //maximum
            break;
        case 6:
            //predecessor
            break;
        case 7:
            //successor
            break;
        case 8:
            //delete
            break;
            
        default:
            break;
    }
}