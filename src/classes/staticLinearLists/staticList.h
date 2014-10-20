#ifndef ____staticList__
#define ____staticList__

#define LIST_SIZE = 10

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