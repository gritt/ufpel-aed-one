#include "linkedList.h"

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

void insert()
{
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
