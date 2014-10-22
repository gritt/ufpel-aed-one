#define LIST_SIZE 10

#ifndef ____staticList__
#define ____staticList__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct thelistDescriptor
{
    int size;
    int *array;
};

typedef struct thelistDescriptor listDescriptorType;

listDescriptorType *initializeListWithSize(int listSize);

int isValidPosition(listDescriptorType *thelistDescriptor, int position);
int doesTheListHaveSpace(listDescriptorType *thelistDescriptor);
void freesUpSpaceInTheList(listDescriptorType *thelistDescriptor, int position);

#endif