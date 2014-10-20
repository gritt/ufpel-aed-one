#ifndef ____staticList__
#define ____staticList__

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