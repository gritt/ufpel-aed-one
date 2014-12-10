#include "binaryTree.h"
#include "app.h"

int main()
{
    int selectedAction;
    char wantToContinue;
    
    
    struct tree *christmasTree;
    christmasTree = initializeTree();
    
    
    do {
        printMenu();
        
        scanf("%d", &selectedAction);
        performActionInTree(selectedAction, christmasTree);
        
        
        printf("\n\nDo you want to continue? (Y/N) :");
        scanf("%s", &wantToContinue);
        
    } while (wantToContinue == 'Y' || wantToContinue == 'y');
    
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
    
    printf("\nSelect one action by number : ");
}

void performActionInTree(int action, struct tree * thisTree)
{
    int valueToInsert;
    
    
    switch (action) {

        case 1:
            
            printf("\nValue : ");
            scanf("%d", &valueToInsert);
            
            insertInTree(thisTree, valueToInsert);
        
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