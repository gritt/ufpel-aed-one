#include "staticList.h"

listDescriptorType *initializeListWithSize(int listSize)
{
    listDescriptorType *theList;
    
    theList = (listDescriptorType *) malloc(sizeof(listDescriptorType));
    
    int *theArray = (int *) malloc(sizeof(int) * LIST_SIZE);
    
    for (int i = 0; i < LIST_SIZE; i++) {
        theArray[i] = -1;
    }
    
    theList->array = theArray;
    
    return theList;
}

int insert(listDescriptorType *thelistDescriptor, int element, int position)
{
    int theLast = listLength(thelistDescriptor);
    
    //error, the list it's full
    if (theLast >= LIST_SIZE) {
        return 0;
    }
    
    //invalid / inexistent position
    if ((position > LIST_SIZE) || (position < 1)) {
        return 0;
    }
    
    //free space to insert
    //for (int i = LIST_SIZE; i <= position; i++) {
    //    thelistDescriptor->array[i + 1] = thelistDescriptor->array[i];
    //}
    
    thelistDescriptor->array[position] = element;
    
    thelistDescriptor->last = theLast + 1;
    
    return 1;
}

int delete(listDescriptorType *thelistDescriptor, int position)
{
    if (position > thelistDescriptor->last) {
        printf("\nThere is no element in position %d\n\n", position);
        return 0;
    }
    
    thelistDescriptor->last = thelistDescriptor->last - 1;

    for (int q = position; q < thelistDescriptor->last; q++) {
        //Copy elements one by one to One position behind;
        thelistDescriptor->array[q] = thelistDescriptor->array[q + 1];
    }
    
    return 1;
}

int get(listDescriptorType *thelistDescriptor, int position)
{
    if (position > LIST_SIZE || position < 1) {
        printf("\n Invalid positon");
    }
    
    if (thelistDescriptor->array[position] == -1) {
        printf("\n This position is empty");
    }
    
    printf ("\n\nFound: %d in positon: %d.\n\n", thelistDescriptor->array[position], position);

    return thelistDescriptor->array[position];
}

int set(listDescriptorType *thelistDescriptor, int element, int position)
{
    if (position > LIST_SIZE || position < 1) {
        printf("\n Invalid position");
        return 0;
    }
    
    thelistDescriptor->array[position] = element;
    
    printf("\n\nElement :%d set to position: %d\n\n", element, position);
    
    return 1;
}

int listLength(listDescriptorType *thelistDescriptor)
{
    int listLength = 0;
    
    for (int i=0; i < LIST_SIZE; i++) {
        if (thelistDescriptor->array[i] != -1) {
            listLength = listLength + 1;
        }
    }
    
    return listLength;
}

void printList(listDescriptorType *thelistDescriptor)
{
    for (int i=0; i < LIST_SIZE; i++) {
        printf("%d, ", thelistDescriptor->array[i]);
    }
}