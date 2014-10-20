#ifndef ____linkedList__
#define ____linkedList__

#include <stdio.h>
#include <stdlib.h>

struct thelistDescriptor
{
    int size;
    int *array;
};

typedef struct thelistDescriptor listDescriptorType;

listDescriptorType *initializeListWithSize(int listSize);

#endif