#define LIST_SIZE 10

#ifndef ____staticList__
#define ____staticList__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct thelistDescriptor
{
    int *array;
    int last;
};

typedef struct thelistDescriptor listDescriptorType;

listDescriptorType *initializeListWithSize(int listSize);


int insert(listDescriptorType *thelistDescriptor, int element, int position);
int delete(listDescriptorType *thelistDescriptor, int position);


void printList(listDescriptorType *thelistDescriptor);
int listLength(listDescriptorType *thelistDescriptor);


int isValidPosition(listDescriptorType *thelistDescriptor, int position);
int doesTheListHaveSpace(listDescriptorType *thelistDescriptor);
void freesUpSpaceInTheList(listDescriptorType *thelistDescriptor, int position);

#endif