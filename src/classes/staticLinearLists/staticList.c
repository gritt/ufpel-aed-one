#include "staticList.h"

listDescriptorType *initializeListWithSize(int listSize)
{
    listDescriptorType *theList;
    
    theList = (listDescriptorType *) malloc(sizeof(listDescriptorType));
    theList->size = listSize;
    
    
    int *theArray = (int *) malloc(sizeof(int) * listSize);
    
    for (int i =0; i < listSize; i++) {
        theArray[i] = -1;
    }
    
    
    theList->array = theArray;
    
    return theList;
}

int insert(listDescriptorType *thelistDescriptor, int element, int position)
{
    if (!doesTheListHaveSpace(thelistDescriptor)) return 0;
    if (!isValidPosition(thelistDescriptor, position)) return 0;
    

    freesUpSpaceInTheList(thelistDescriptor, position);
    
    thelistDescriptor->array[position] = element;
    
    thelistDescriptor->size = thelistDescriptor->size + 1;
    
    return 1;
}

int isValidPosition(listDescriptorType *thelistDescriptor, int position)
{
    if ((position > thelistDescriptor->size + 1) || (position < 1)) {
        //invalid / inexistent position
        return false;
    }
    return true;
}

int doesTheListHaveSpace(listDescriptorType *thelistDescriptor)
{
    if (thelistDescriptor->size >= LIST_SIZE) {
        //error, the list it's full
        return false;
    }
    return true;
}


void freesUpSpaceInTheList(listDescriptorType *thelistDescriptor, int position)
{
    for (int i = thelistDescriptor->size; i <= position; i++) {
        thelistDescriptor->array[i + 1] = thelistDescriptor[i];
    }
}



int get()
{
    return 1;
}

void set()
{
}

int lenght()
{
    return 1;
}

void delete()
{
}
